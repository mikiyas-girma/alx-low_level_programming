#include "main.h"
/**
 * reverse_array - reverses given array
 * @a: given array name
 * @n: the size of the array
 * @tmpL temporary variable
 *
 */
void reverse_array(int *a, int n)
{
	int start;

	int end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		int tmp = a[start];

		a[start]  = a[end];
		a[end]  = tmp;
		start++;
		end--;
	}
}
