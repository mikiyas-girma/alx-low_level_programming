#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *This program will assign a random number to the variable n
 *each time it is executed and prints whether the value is postive or negative.
 */
/**
 * main - entry point for the program
 * Return: 0 when finish the task
 */
int main(void)
{
		int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if(n > 0)
		{
			printf(n, "is positive\n");
		}
		else if(n < 0)
		{
			printf(n, "is negative\n");
		}
		else
		{
			printf(n, "is zero\n");
		}
		return (0);
}
