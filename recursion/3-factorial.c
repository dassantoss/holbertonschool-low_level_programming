#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 *
 * @n: input number
 *
 * Return: Return the factorial of a given number
 * return -1 to idicate error when n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
