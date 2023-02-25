#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9 whitout 2 & 4
 *
 * Return: no return.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 && n != 52)
			_putchar(n);
	}
	_putchar('\n');
}
