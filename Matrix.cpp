#include <vector>
#include <iomanip>
#include "Matrix.hpp"
#include "Logger.hpp"

Logger matrixLog("Matrix");

/**
 * Takes the integer power of a number to an exponent
 */
int power(int num, int exp)
{
	int result = 1;
	for(int i=0; i<exp; i++)
		result *= num;

	return result;
}

/**
 * Calculates the determinant of an nxn matrix
 * MATRIX MUST BE SQUARE
 */
std::optional<double> Matrix::determinant() const
{
	if(numRows != numCols)
	{
		matrixLog.warn("The matrix is not square");
		return std::nullopt;
	}

	double determinant = 1;
	Matrix copy(*this);
	for(int i=0; i<numRows; i++)
	{
		if(copy[i*numRows + i] < 0.000001 && copy[i*numRows + i]  > -0.000001) //current pivot is unsuitable
		{
			for(int j=i+1; j<=numRows; j++) //searches for a suitable pivot
			{
				if(j == numRows) //no suitable pivot
					return 0;

				if(copy[j*numRows + i] > 0.000001 || copy[j*numRows + i] < -0.000001) //suitable pivot found
				{
					for(int k=0; k<numRows; k++) //swaps the rows
					{
						double temp = copy[j*numRows + k];
						copy[j*numRows + k] = copy[i*numRows + k];
						copy[i*numRows + k] = temp;
					}

					determinant *= -1;
					break;
				}
			}
		}

		double temp = copy[i*numRows + i];
		determinant *= temp;
		for(int j=0; j<numRows; j++) //divides the row by the pivot's value
			copy[i*numRows + j] /= temp;

		for(int j=i+1; j<numRows; j++) //cancels out everything below the pivot
		{
			temp = copy[j*numRows + i];
			for(int k=0; k<numRows; k++)
				copy[j*numRows + k] -= temp*copy[i*numRows + k];
		}
	}

	return determinant;
}

/**
 * Calculates and returns the inverse of a matrix
 * returns 0 if the matrix has no inverse
 * MATRIX MUST BE SQUARE
 */
std::optional<Matrix> Matrix::inverseMatrix() const
{
	if(numRows != numCols)
	{
		matrixLog.warn("Not a square matrix");
		return std::nullopt;
	}

	int size = numRows;
	Matrix inverse(size);
	Matrix copy(*this);
	for(int i=0; i<size; i++) //iteration through rows
	{
		if(copy[i*size + i] < 0.000001 && copy[i*size + i]  > -0.000001) //current pivot is unsuitable
		{
			for(int j=i+1; j<=size; j++) //searches for a suitable pivot
			{
				if(j == size) //no suitable pivot
				{
					matrixLog.warn("This Matrix has no inverse");
					return *this;
				}

				if(copy[j*size + i] > 0.000001 || copy[j*size + i] < -0.000001) //suitable pivot found
				{
					for(int k=0; k<size; k++) //swaps the rows
					{
						double temp = copy[j*size + k];
						copy[j*size + k] = copy[i*size + k];
						copy[i*size + k] = temp;

						temp = inverse[j*size + k];
						inverse[j*size + k] = inverse[i*size + k];
						inverse[i*size + k] = temp;
					}

					break;
				}
			}
		}

		double temp = copy[i*size + i];
		for(int j=0; j<size; j++) //divides the row by the pivot's value
		{
			copy[i*size + j] /= temp;
			inverse[i*size + j] /= temp;
		}

		for(int j=0; j<size; j++) //cancels out everything above and below the pivot
		{
			if(j == i)
				continue;

			temp = copy[j*size + i];
			for(int k=0; k<size; k++)
			{
				copy[j*size + k] -= temp*copy[i*size + k];
				inverse[j*size + k] -= temp*inverse[i*size + k];
			}
		}
	}

	return inverse;
}

Matrix Matrix::transpose() const
{
	double* array = new double[numCols*numRows];
	for(int i=0; i<numRows; i++)
		for(int j=0; j<numCols; j++)
			array[j*numRows + i] = matrix[i*numCols + j];

	Matrix t(array, numCols, numRows);
	delete[] array;
	return t;
}

Matrix Matrix::columnSpace() const
{
	Matrix reduced(this->RREF());
	std::vector<int> cols(0); //a vector conaining the column numbers to be included
	for (int i=0; i<numRows; i++)
	{
		int j = i;
		while (std::abs(reduced[i * numCols + j] - 1) > 0.000001 && j < numCols) //searching for pivot in row
			j++;

		if (j >= reduced.numCols) //no pivot in row
			continue;

		cols.push_back(j);
	}

	double* temp = new double[numRows * cols.size()];
	for (int i=0; i<numRows; i++)
		for (int j=0; j<cols.size(); j++)
			temp[i*cols.size() + j] = matrix[i*numCols + cols[j]];

	Matrix returnVal(temp, numRows, cols.size());
	delete[] temp;
	return returnVal;
}

Matrix Matrix::rowSpace() const
{ return this->transpose().columnSpace(); }

Matrix Matrix::nullSpace() const
{
	Matrix reduced(this->RREF());
	std::vector<int> cols(0); //list of columns not to include
	for(int i=0; i<numRows; i++)
	{
		int j = i;
		while(j < reduced.numCols && std::abs(reduced[i*numCols + j]) < 0.000001) //searching for pivot in row
			j++;

		if(j >= reduced.numCols) //no pivot in row
			continue;

		cols.push_back(j);
	}

	double* temp = new double[numCols * (numCols - cols.size())];
	for(int i=0; i<numRows; i++) //iteration through rows
	{
		for(int j=i; j<cols.size(); j++) //iteration through pivots
		{
			unsigned int freeVarNum = 0;
			unsigned int count = 0;
			for(unsigned int k=0; k<numCols; k++) //iteration through all collumns
			{
				while(count<cols.size() && k == cols[count]) //skips past other pivot collumns
				{
					k++;
					count++;
				}

				temp[cols[j]*(numCols - cols.size()) + freeVarNum] = -reduced[i*numCols + k];
				freeVarNum++;
			}
		}
	}

	int freeVariable = 0;
	for(int i=0; i<numCols; i++) //iteration through temp's rows
	{
		for(int check=i-freeVariable; check<cols.size() && i == cols[check]; check++) //row has already been set up
			i++;

		for(int j=0; j<(numCols-cols.size()); j++) //setting up free variable row
		{
			if(j == freeVariable) //collumn belongs to this free variable
				temp[i*(numCols-cols.size()) + j] = 1;
			else //column belongs to different free variable
				temp[i*(numCols-cols.size()) + j] = 0;
		}

		freeVariable++;
	}

	Matrix returnVal(temp, numCols, numCols-cols.size());
	delete[] temp;
	return returnVal;
}

Matrix Matrix::RREF() const
{
	Matrix copy(*this);
	int pivotCol=0;
	for(int currRow=0; pivotCol<numCols && currRow<numRows; currRow++) //iteration through rows
	{
		while(pivotCol < numCols && std::abs(copy[currRow*numCols + pivotCol]) < 0.000001) //current pivot is unusable
		{
			bool pivotFound = false;
			for(int i=currRow+1; i<numRows; i++) //searches for better pivot
			{
				if(std::abs(copy[i*numCols + pivotCol]) > 0.000001) //suitable pivot found
				{
					pivotFound = true;
					for(int j=pivotCol; j<numCols; j++)
					{
						double temp = copy[i*numCols + j];
						copy[i*numCols + j] = copy[currRow*numCols + j];
						copy[currRow*numCols + j] = temp;
					}

					break;
				}
			}

			if(!pivotFound)
				pivotCol++;
		}

		if(pivotCol >= numCols)
			break;

		double temp = copy[currRow*numCols + pivotCol];
		for(int i=pivotCol; i<numCols; i++)
			copy[currRow*numCols + i] /= temp;

		for(int i=0; i<numRows; i++)
		{
			if(i == currRow)
				continue;

			temp = copy[i*numCols + pivotCol];
			for(int j=pivotCol; j<numCols; j++)
				copy[i*numCols + j] -= temp*copy[currRow*numCols + j];
		}

		pivotCol++;
	}

	return copy;
}

std::optional<Matrix> Matrix::extendMatrix(const Matrix& b) const
{
	if(numRows != b.numRows)
	{
		matrixLog.warn("These matrices cannot be combined");
		return std::nullopt;
	}

	double* arr = new double[numRows * (numCols + b.numCols)];
	for(int i = 0; i < numRows; i++)
	{
		for(int j = 0; j < numCols; j++)
			arr[i * (numCols + b.numCols) + j] = matrix[i * numCols + j];

		for(int j = 0; j < b.numCols; j++)
			arr[i * (numCols + b.numCols) + numCols + j] = b.matrix[i * b.numCols + j];
	}

	Matrix extended(arr, numRows, numCols + b.numCols);
	delete[] arr;
	return extended;
}

std::optional<Matrix> Matrix::operator*(const Matrix& b) const
{
	if(b.numRows != numCols)
	{
		matrixLog.warn("These matrices cannot be multiplied in this order\n\n");
		return b;
	}

	double* result = new double[numRows*b.numCols];
	for(int i=0; i<numRows; i++)
	{
		for(int j=0; j<b.numCols; j++)
		{
			result[i*b.numCols + j] = 0;
			for(int k=0; k<numCols; k++)
				result[i*b.numCols + j] += matrix[i*numCols + k] * b.matrix[k*b.numCols + j];
		}
	}

	Matrix m(result, numRows, b.numCols);
	delete[] result;
	return m;
}

Matrix Matrix::operator*(const double& scalar) const
{
	Matrix result(*this);
	for(int i=0; i<numRows*numCols; i++)
		result[i] *= scalar;

	return result;
}

/**
 * Adds two matrices together
 * Matrices must have the same size to be added
 */
std::optional<Matrix> Matrix::operator+(const Matrix& b) const
{
	if(numRows != b.numRows || numCols != b.numCols)
	{
		matrixLog.warn("These matrices can't be added together\n");
		return b;
	}

	double* result = new double[numRows*numCols];

	for(int i=0; i<numRows*numCols; i++)
		result[i] = matrix[i] + b.matrix[i];

	Matrix a(result, numRows, numCols);
	delete[] result;
	return a;
}

Matrix& Matrix::operator=(const Matrix &b)
{
    if(this == &b)
        return *this;

	delete[] matrix;
	matrix = new double[numRows*numCols];
	for(int i=0; i<numRows*numCols; i++)
		matrix[i] = b.matrix[i];

	return *this;
}

Matrix& Matrix::operator*=(const Matrix& b)
{
    auto result = *this * b;
    if(result)
        *this = result.value();

    return *this;
}

/**
 * checks if all the matrices are equivalent
 * @param b the other matrix
 * @return true if they are the same, false otherwise
 */
bool Matrix::operator==(const Matrix &b) const
{
	if(numRows != b.numRows || numCols != b.numCols)
		return false;

	for(int i=0; i<numRows*numCols; i++)
		if(matrix[i] - b.matrix[i] > 0.000001 || matrix[i] - b.matrix[i] < -0.000001)
			return false;

	return true;
}

/**
 * checks if all the matrices are different
 * @param b the other matrix
 * @return false if they are the same, true otherwise
 */
bool Matrix::operator!=(const Matrix &b) const
{ return !(*this == b); }

double& Matrix::operator[](int i)
{ return matrix[i]; }

/**
 * Prints out the matrix according to its rows and columns
 */
std::ostream& operator<<(std::ostream& stream, const Matrix& b)
{
	for(int i=0; i<b.numRows; i++)
	{
		stream << std::endl;
		for(int j=0; j<b.numCols; j++)
		{
			stream << std::setw(5) << std::left << b.matrix[i*b.numCols + j];
			stream << ' ';
		}
	}

	return stream;
}