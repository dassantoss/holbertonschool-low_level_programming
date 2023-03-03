#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: Array input
 * @n: Number of elements of the array
 *
 * Return: No return.
 */
void reverse_array(int *a, int n)
{
	int tmp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
