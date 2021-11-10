#pragma once

#include "pch.hpp"

class ExtendedMatrix : public Matrix
{
private:
	double* solution;

public:
	ExtendedMatrix(int size)
	: Matrix(size)
	{
		solution = new double[size];
		for (int i=0; i<size; i++)
			solution[i] = 0;
	}

	ExtendedMatrix(double* arr, int rows, int cols)
	: Matrix(arr, rows, cols)
	{
		solution = new double[rows];
		for (int i=0;i<rows; i++)
			solution[i] = 0;
	}

	ExtendedMatrix(const Matrix& b)
	: Matrix(b)
	{
		solution = new double[numRows];
		for (int i = 0; i < numRows; i++)
			this->solution[i] = 0;
	}

	ExtendedMatrix(double* arr, int rows, int cols, const double* solution)
	: Matrix(arr, rows, cols)
	{
		this->solution = new double[rows];
		for (int i=0; i<rows; i++)
			this->solution[i] = solution[i];
	}

	ExtendedMatrix(const Matrix& b, const double* solution)
	: Matrix(b)
	{
		this->solution = new double[numRows];
		for (int i=0; i<numRows; i++)
			this->solution[i] = solution[i];
	}

	ExtendedMatrix(const ExtendedMatrix& b)
	: Matrix(b.matrix, b.numRows, b.numCols)
	{
		solution = new double[b.numRows];
		for(int i=0; i<b.numRows; i++)
			solution[i] = b.solution[i];
	}

	ExtendedMatrix operator=(const Matrix& b);

	ExtendedMatrix operator=(const ExtendedMatrix& b);

	~ExtendedMatrix()
	{ delete[] solution; }

	/*
	solutionSet finds a matrix representing the solution set of the extended matrix
	the columns are given as c + s1 + s2 + ... + sn where c is a constant vector and s1 - sn are free variables
	*/
	Matrix solutionSet() const;

	/*
	calculates the reduced row echelon form of the matrix, also modifying the solutions to keep the matrices equal
	*/
	ExtendedMatrix extendedRREF() const;

	/**
	 * Places the contents of the extended matrix in the output stream
	 */
	friend std::ostream& operator<<(std::ostream& stream, const ExtendedMatrix& b);
};