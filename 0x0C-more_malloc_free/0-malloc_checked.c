#include "main.h"
/**
 * *malloc_checked - simply allocates memory
 * @b: size of byte to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *my;


	my = malloc(b);

	if (my == NULL)
	{
		exit(98);
	}
	return (my);
}
