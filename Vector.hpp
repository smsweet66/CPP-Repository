#pragma once

#include "pch.hpp"

class Vector
{
public:
	Vector(const Vector& other)
	: x(other.x), y(other.y), z(other.z)
	{ numVectors++; }

	Vector(double x, double y, double z)
	: x(x), y(y), z(z)
	{ numVectors++; }

	Vector(double x, double y)
	: x(x), y(y), z(0)
	{ numVectors++; }

	Vector()
	: x(0), y(0), z(0)
	{ numVectors++; }

	~Vector()
	{ numVectors--; }

	double dot(const Vector& b) const;

	Vector cross(const Vector& b) const;

	double magnitude() const;

	Vector unitVector() const;

	static int getNumVectors();

	Vector operator+(const Vector& b) const;

	Vector operator-(const Vector& b) const;

	Vector operator*(const double& num) const;

	bool operator==(const Vector& b) const;

	bool operator!=(const Vector& b) const;

	friend std::ostream& operator<<(std::ostream& stream, const Vector& b);

private:
	static int numVectors;
	double x, y, z;
};