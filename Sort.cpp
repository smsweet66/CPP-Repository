#include "pch.hpp"

/**
 * Merges the two sections of the array together in sorted order
 */
template <typename T>
void merge(T* array, int high, int low)
{
	int arrayBLength = (high-low+1);
	T arrayB[arrayBLength];
	int bMiddle = (arrayBLength+1)/2;
	for(int i=0; i<arrayBLength; i++)
		arrayB[i] = array[i + low];

	int lIterator = 0;
	int rIterator = bMiddle;
	int arrayIter = low;

	while(lIterator < bMiddle && rIterator < arrayBLength)
	{
		/*
		* If the number on the left is less than on the right,
		* it places the left index into the array
		*/
		if(lIterator < bMiddle && arrayB[lIterator] <= arrayB[rIterator])
		{
			array[arrayIter] = arrayB[lIterator];
			arrayIter++;
			lIterator++;
		}

		/*
		* If the number on the right is less than on the left,
		* it places the right index into the array
		*/
		if(rIterator < arrayBLength && arrayB[rIterator] < arrayB[lIterator])
		{
			array[arrayIter] = arrayB[rIterator];
			arrayIter++;
			rIterator++;
		}

		/*
		* If the whole left side has been placed, it then places
		* the right side into the array.
		*/
		if(lIterator == bMiddle && rIterator < arrayBLength)
		{
			while(rIterator < arrayBLength)
			{
				array[arrayIter] = arrayB[rIterator];
				arrayIter++;
				rIterator++;
			}
		}

		/*
		* If the whole right side has been placed, it then places
		* the left side into the array.
		*/
		else if(lIterator < bMiddle && rIterator == arrayBLength)
		{
			while(lIterator < bMiddle)
			{
				array[arrayIter] = arrayB[lIterator];
				arrayIter++;
				lIterator++;
			}
		}
	}
}

/**
 * sorts the values of an array of any type
 * @param array the array to be sorted
 * @param start the first index of the section to be sorted (default 0)
 * @param lastIndex the last index of the section to be sorted
 */
template <typename T>
void sort(T* array, int high, int low)
{
	if(low<high)
	{
		int middle = (high+low)/2;
		split(array, middle, low);
		split(array, high, middle + 1);
		merge(array, high, low);
	}
}