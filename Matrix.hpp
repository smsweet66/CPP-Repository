#pragma once

#include "pch.hpp"

class Matrix
{
public:
	Matrix(int size)
	: numRows(size), numCols(size)
	{
		matrix = new double[size*size];
		for(int i=0; i<size*size; i++)
			matrix[i] = (i/size == i%size ? 1 : 0);
	}

	Matrix(double* arr, int rows, int cols)
	: numRows(rows), numCols(cols)
	{
		matrix = new double[rows*cols];
		for(int i=0; i<rows*cols; i++)
			matrix[i] = arr[i];
	}

	Matrix(const Matrix& b)
	: numRows(b.numRows), numCols(b.numCols)
	{
		matrix = new double[numRows*numCols];
		for(int i=0; i<numRows*numCols; i++)
			matrix[i] = b.matrix[i];
	}

	~Matrix()
	{
		delete[] matrix;
	}

	/**
	 * Calculates the determinant of an nxn matrix
	 * MATRIX MUST BE SQUARE
	 */
	double determinant() const;

	/**
	 * Calculates and returns the inverse of a matrix
	 * returns NULL if the matrix has no inverse
	 * MATRIX MUST BE SQUARE
	 */
	Matrix inverseMatrix() const;

	/**
	 * Generates a transpose matrix (flips the rows and columns)
	 * @return the transpose matrix
	 */
	Matrix transpose() const;

	/*
	Returns a matrix representing the column space of the matrix
	*/
	Matrix columnSpace() const;

	/*
	Returns a matrix representing the row space of the matrix
	*/
	Matrix rowSpace() const;

	/*
	Returns a matrix representing the null space of the matrix
	*/
	Matrix nullSpace() const;

	/*
	Returns a matrix equal to the current one, but in row reduce echelon form
	*/
	Matrix RREF() const;

	/*
	Extends the matrix and returns the result
	*/
	Matrix extendMatrix(const Matrix& b) const;

	/**
	 * Multiplies matrix1 by matrix2.
	 * matrix1 must have the same number of columns as matrix2 has rows.
	 */
	Matrix operator*(const Matrix& b) const;

	/*
	Multiplies each entry of the matrix by the scalar
	*/
	Matrix operator*(const double& scalar) const;

	/**
	 * Adds two matrices together
	 * Matrices must have the same size to be added
	 */
	Matrix operator+(const Matrix& b) const;

	/**
	 * copies the contents of a different matrix into this one, freeing the previous memory
	 * @param b The matrix being copied
	 * @return returns a reference to this matrix
	 */
	Matrix& operator=(const Matrix& b);

	/**
	* multiplies the two matricies together and sets the current one to the result
	* @param b The matrix being multiplied
	* @return returns a reference to this matrix
	*/
	Matrix& operator*=(const Matrix& b);

	/**
	 * checks if all the matrices are equivalent
	 * @param b the other matrix
	 * @return true if they are the same, false otherwise
	 */
	bool operator==(const Matrix& b) const;

	/**
 	* checks if all the matrices are different
 	* @param b the other matrix
 	* @return false if they are the same, true otherwise
 	*/
	bool operator!=(const Matrix& b) const;

	/**
	 * Places the contents of the matrix in the output stream
	 */
	friend std::ostream& operator<<(std::ostream& stream, const Matrix& b);

protected:
	/**
	* shorthand for getting an element from the array
	* @param i the index of the array
	* @return the element at the index
	*/
	double& operator[](int i);
	double* matrix;
	unsigned int numRows;
	unsigned int numCols;
};