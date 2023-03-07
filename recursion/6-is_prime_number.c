#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1) /* 1 and negative numbers are not prime */
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime recursively
 *
 * @n: number to check
 * @i: counter to check if n is divisible by i
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i == n) /* If we reach n, n is prime */
		return (1);
	if (n % i == 0) /* If n is divisible by i, it's not prime */
		return (0);
	return (check_prime(n, i + 1)); /* Check the next number */
}
