#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: input number
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;

	last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
