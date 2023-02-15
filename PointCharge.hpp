#pragma once

#include "Vector.hpp"


class PointCharge
{
private:
	double charge; //coulombs
	Vector location;

public:
	PointCharge() {}

	PointCharge(double charge, double x, double y, double z=0)
	: charge(charge), location(x, y, z) {}

	PointCharge operator=(const PointCharge& b);

	Vector electricField(const Vector& point) const;

	Vector force(const PointCharge& point) const;

	const double k = 8.99 * 1000000000;
};