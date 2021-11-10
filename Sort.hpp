#pragma once

/**
 * sorts the values of an array of any type
 * @param array the array to be sorted
 * @param start the first index of the section to be sorted (default 0)
 * @param lastIndex the last index of the section to be sorted
 */
template <typename T>
void sort(T*, int high, int low = 0);