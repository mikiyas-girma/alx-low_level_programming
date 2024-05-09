#include "search_algos.h"
/**
 * binary_search -  for a value in a sorted array of integers using
 * the binary search algorithm
 * @array: points to the first element in the array to search in
 * @size: size of the array
 * @value: is the value to search for
 * Return: the index where the value is located or  -1 if the array
 *	is not present or null
 */

int binary_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;

	if (!array || size == 0)
		return (-1);

	while (low <= high)
	{
		unsigned int mid = low + (high - low) / 2;
		unsigned int i;

		printf("Searching in array:");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
