#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 *
 * @n: The number
 *
 * Return: 1 for positive,  Returns -1 for negative and Returns 0 for  0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
