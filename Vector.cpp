#include "pch.hpp"

Logger vecLog("Vector");

int Vector::numVectors = 0;

/**
 * Calculates the cross product of two vectors
 */
Vector Vector::cross(const Vector& b) const
{
	vecLog.log("Calculating cross product");
	return Vector((y*b.z - z*b.y), -(x*b.z - z*b.x), (x*b.y - y*b.x));
}

/**
 * Calculates the dot product of two vectors
 */
double Vector::dot(const Vector& b) const
{
	vecLog.log("Calculating dot product");
	return x*b.x + y*b.y + z*b.z;
}

/**
 * Calculates the magnitude of a vector
 */
double Vector::magnitude() const
{
	//vecLog.log("Calculating magnitude");
	double squared = x*x + y*y + z*z;
	double approx = squared/2;
	while(approx*approx - squared > .000001 || approx*approx - squared < -.000001)
		approx = .5*(approx + squared/approx);

	return approx;
}

/**
 * Generates a unit vector in the direction of a different vector
 */
Vector Vector::unitVector() const
{
	float magSquared = x*x + y*y + z*z;
	if(magSquared < .000001 && magSquared > -.000001)
	{
		vecLog.warn("Cannot create a unit vector of a 0 vector");
		return *this;
	}

	const float x2 = magSquared * 0.5F;

	union
	{
		float f;
		uint32_t i;
	} conv = { magSquared };
	conv.i = 0x5f3759df - (conv.i >> 1);
	conv.f *= (1.5F - (x2 * conv.f * conv.f));

	return (*this)*conv.f;
}

/**
 * Gets the current number of instantiated vector variables
 */
int Vector::getNumVectors()
{ return numVectors; }

/**
 * Operator overload to allow vectors to be added
 */
Vector Vector::operator+(const Vector& b) const
{ return Vector(x + b.x, y + b.y, z + b.z); }

/**
 * Operator overload to allow vectors to be subtracted
 */
Vector Vector::operator-(const Vector& b) const
{
	return Vector(x - b.x, y - b.y, z - b.z);
}

/**
 * Operator overload to allow a vector to be multiplied by a scalar value
 */
Vector Vector::operator*(const double& num) const
{ return Vector(num*x, num*y, num*z); }

/**
 * Operator overload to check if two Vectors are the same
 */
bool Vector::operator==(const Vector &b) const
{
	double tol = .00001;
	return (x-b.x) < tol && (x-b.x) > -tol && (y-b.y) < tol && (y-b.y) > -tol && (z-b.z) < tol && (z-b.z) > -tol;
}

/**
 * Operator overload to check if two vectors are NOT the same
 */
bool Vector::operator!=(const Vector &b) const
{ return !(*this == b); }

/**
 * Operator overload to allow a vector to be outputted to stdout
 */
std::ostream& operator<<(std::ostream& stream, const Vector& b)
{
	stream << "<" << b.x << ", " << b.y << ", " << b.z << ">";
	return stream;
}