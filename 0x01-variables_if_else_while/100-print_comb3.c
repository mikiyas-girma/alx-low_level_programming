#include <stdio.h>
/**
 * main - entry point
 * Return: 0 ends the program
 * possible combination of two digit nums
 */
int main(void)
{
	int m = 48;

	while (m < 57)
	{
		int n = 48;

		while (n < 58)
		{
			if (m < n)
			{
				putchar(m);
				putchar(n);
				if (!(m == 56 && n == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
