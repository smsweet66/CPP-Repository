#include "pch.hpp"

Logger extendedMatrixLog("ExtendedMatrix");

Matrix ExtendedMatrix::solutionSet() const
{
	ExtendedMatrix reduced(this->extendedRREF());
	std::vector<int> cols(0); //list of columns not to include
	for(int i=0; i<numRows; i++)
	{
		int j = i;
		while(std::abs(reduced[i*numCols + j] - 1) > 0.000001 && j<numCols) //searching for pivot in row
			j++;

		if(j >= reduced.numCols && std::abs(reduced.solution[j]) > 0.000001) //no solution
		{
			extendedMatrixLog.warn("This extended matrix has no solution");
			return NULL;
		}
		else if(j >= reduced.numCols) //row has no pivot, but matrix is still consistant
			continue;

		cols.push_back(j);
	}

	double* temp = new double[numCols*(1 + numCols - cols.size())];
	for(int i=0; i<cols.size(); i++) //iterating through pivot columns
	{
		int j=0;
		while(j <= cols[i] && std::abs(reduced[j*numCols + cols[i]] - 1) > 0.000001) //finding row of pivot
			j++;

		temp[cols[i]*(1 + numCols - cols.size())] = reduced.solution[j];
		int freeVarNum = 0;
		for(int k=cols[i] + 1; k<numCols; k++)
		{
			for(int count=i + 1; count < cols.size() && k == cols[count]; count++)
				k++;

			if(k == numCols)
				break;

			temp[cols[i]*(1 + numCols - cols.size()) + freeVarNum + 1] = -reduced[j*numCols + k];
			freeVarNum++;
		}
	}

	int freeVariable = 0;
	for(int i=0; i<numCols; i++) //iteration through temp's rows
	{
		for(int check=i - freeVariable; check < cols.size() && i == cols[check]; check++) //row has already been set up
			i++;

		if(i >= numCols)
			break;

		for(int j=0; j<1 + numCols - cols.size(); j++) //setting up free variable row
		{
			if(j-1 == freeVariable) //collumn belongs to this free variable
				temp[i*(1 + numCols - cols.size()) + j] = 1;
			else //column belongs to different free variable
				temp[i*(1 + numCols - cols.size()) + j] = 0;
		}

		freeVariable++;
	}

	Matrix returnVal(temp, numCols, numCols - cols.size() + 1);
	delete[] temp;
	return returnVal;
}

ExtendedMatrix ExtendedMatrix::extendedRREF() const
{
	ExtendedMatrix copy(*this);
	int pivotCol = 0;
	for(int currRow=0; currRow<numRows; currRow++) //iteration through rows
	{
		if(std::abs(copy[currRow*numCols + pivotCol]) < 0.000001) //current pivot is unusable
		{
			bool pivotFound = false;
			for(int i=currRow; i<numRows; i++) //searches for better pivot
			{
				if(std::abs(copy[i*numCols + pivotCol]) > 0.000001) //suitable pivot found
				{
					pivotFound = true;
					for(int j = pivotCol; j < numCols; j++)
					{
						double temp = copy[i*numCols + j];
						copy[i*numCols + j] = copy[currRow*numCols + j];
						copy[currRow*numCols + j] = temp;

						temp = copy.solution[i];
						copy.solution[i] = copy.solution[currRow];
						copy.solution[currRow] = temp;
					}

					break;
				}
			}

			if(!pivotFound)
			{
				pivotCol++;
				continue;
			}
		}

		double temp = copy[currRow*numCols + pivotCol];
		copy.solution[currRow] /= temp;
		for(int i=pivotCol; i<numCols; i++)
			copy[currRow*numCols + i] /= temp;

		for(int i=0; i<numRows; i++)
		{
			if(i == currRow)
				continue;

			temp = copy[i*numCols + pivotCol];
			copy.solution[i] -= temp*copy.solution[currRow];
			for(int j=pivotCol; j<numCols; j++)
				copy[i*numCols + j] -= temp*copy[currRow*numCols + j];
		}

		pivotCol++;
	}

	return copy;
}

ExtendedMatrix& ExtendedMatrix::operator=(const Matrix& b)
{
	ExtendedMatrix temp(b);
	*this = temp;
	return *this;
}

ExtendedMatrix& ExtendedMatrix::operator=(const ExtendedMatrix& b)
{
	delete[] matrix;
	delete[] solution;

	numRows = b.numRows;
	numCols = b.numCols;

	matrix = new double[numRows*numCols];
	for(int i=0; i<numRows*numCols; i++)
		matrix[i] = b.matrix[i];

	solution = new double[numRows];
	for(int i=0; i<numRows; i++)
		solution[i] = b.solution[i];

	return *this;
}

std::ostream& operator<<(std::ostream& stream, const ExtendedMatrix& b)
{
	for(int i=0; i<b.numRows; i++)
	{
		stream << std::endl;
		for(int j=0; j<b.numCols; j++)
		{
			stream << std::setw(5) << std::left << b.matrix[i * b.numCols + j];
			stream << ' ';
		}

		stream << "|  " << b.solution[i];
	}

	return stream;
}