#include "main.h"

/**
 * _sqrt_helper - Recursive helper function to find square root
 * @n: Number to find square root of
 * @guess: Current guess for square root
 *
 * Return: Square root of n, or -1 if no natural square root exists
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find square root of
 *
 * Return: Square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_helper(n, 0));
}
