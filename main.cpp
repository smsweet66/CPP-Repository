#include "pch.hpp"

using namespace std::chrono;
using namespace std::chrono_literals;

template <typename T>
void print(T val);

template <typename T>
void printArray(T arr[], int size);

Logger mainLog("Main");

int Vector::numVectors = 0;

int main()
{
	PointCharge charges[18];

	for(int i=0; i<9; i++)
		charges[i] = PointCharge(1*0.00000001, 0, -2 + 0.5*i);

	for(int i=0; i<5; i++)
		charges[i+9] = PointCharge(-0.00000001, 3 + 0.5*i, 0.5*i);

	for(int i=0; i<4; i++)
		charges[i+14] = PointCharge(-0.00000001, 3.5 + 0.5*i, -0.5 - 0.5*i);

	Vector totalForce;

	for(int i=0; i<18; i++)
		totalForce = totalForce + charges[i].force(PointCharge(8*0.0001, 1.85, 0));

	print(totalForce.magnitude());

	return 0;
}

template <typename T>
void print(T val)
{ std::cout << val << std::endl << std::endl; }

template <typename T>
void printArray(T arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		std::cout << arr[i] << " ";
		if((i+1)%20 == 0)
			std::cout << std::endl;
	}
	std::cout << std::endl;
}