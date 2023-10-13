#include "main.h"
#include <stdlib.h>
/**
 * print_most_numbers - prints from 0 to 9 except from 2 and 4 using putchar
 * @num: variable for the numbers
 */
void print_most_numbers(void)
{
	char num = '0';

	while(num < '10')
	{
		if (num != '2'  && num != '4')
		{
			_putchar(num);
		}
		num++;
		_putchar('\n');
	}
}
