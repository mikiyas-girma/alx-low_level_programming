#include <stdio.h>
/**
 * main - entry point
 * Return: 0  and end
 * prints all possible different combinations of three digits
 */
int main(void)
{
	int j, k, l;

	j = 48;

	while (j < 56)
	{
		k = 48;

		while (k < 57)
		{
			l = 48;

			while (l < 58)
			{
				if (j < k && k < l)
				{
					putchar(j);
					putchar(k);
					putchar(l);
					if (!(j == 55 && k == 56 && l == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			k++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
