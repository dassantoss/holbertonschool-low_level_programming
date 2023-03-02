#include <stdio.h>

/**
 * print_array - Function that prints n elements of an array of integers,
 *
 * @a: Input Array integer
 * @n: Input number of elements of the array to be printed
 *
 * Return: No return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n -1)
			printf(", ");
	}
	printf("\n");
}
