#include <stdio.h>

/**
 * print_to_98 - function prints all natural numbers from n to 98
 *
 * @n: input Number
 *
 * Return: Return integer
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", 98);
}
