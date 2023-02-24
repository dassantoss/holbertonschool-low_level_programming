#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (col = 1; col <= 9; col++)
		{
			product = row * col;
			_putchar(',');
			_putchar(' ');
			if (product < 10)
				_putchar(' ');
			else
				_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
