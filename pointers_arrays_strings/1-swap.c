#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: Input first integer
 * @b: Input second integer
 *
 * Return: No
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
