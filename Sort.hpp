#pragma once

/**
 * sorts the values of an array of any type
 * @param array the array to be sorted
 * @param size the size of the matrix (or 1 plus the last index)
 * @param low the first index of the section to be sorted (default 0)
 */
template <typename T>
static void sort(T* array, int size, int low = 0)
{
	static auto merge = [&](int high, int low)
	{
		int arrayBLength = (high - low + 1);
		T arrayB[arrayBLength];
		int bMiddle = (arrayBLength + 1)/2;
		for(int i = 0; i < arrayBLength; i++)
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
	};

	if(low<size-1)
	{
		int middle = (size+low-1)/2;
		sort(array, middle + 1, low);
		sort(array, size, middle + 1);
		merge(size-1, low);
	}
}

