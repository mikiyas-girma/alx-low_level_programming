#include "main.h"
/**
 * *malloc_checked - simply allocates memory
 * @b: size of byte to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mymem = malloc(sizeof(b));

	if (mymem == NULL)
	{
		exit(98);
	}
	return (mymem)
}
