#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: points to the first element in the array
 * @size: size of the array
 * @value: the item to be searched with linear search
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);

}
