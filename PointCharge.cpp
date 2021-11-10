#include "pch.hpp"

Vector PointCharge::electricField(const Vector& point) const
{
	Vector toPoint(point - location);
	double fieldMag = k*std::abs(charge)/(toPoint.magnitude()*toPoint.magnitude());
	Vector field = toPoint.unitVector() * (charge/std::abs(charge)) * fieldMag;

	return field;
}

Vector PointCharge::force(const PointCharge& point) const
{
	Vector toPoint(point.location - location);
	double forceMag = k * std::abs(charge) * std::abs(point.charge) / (toPoint.magnitude() * toPoint.magnitude());
	Vector force = toPoint.unitVector() * (charge / std::abs(charge)) * (point.charge/std::abs(point.charge)) * forceMag;

	return force;
}

PointCharge PointCharge::operator=(const PointCharge& b)
{
	charge = b.charge;
	location = b.location;

	return (*this);
}