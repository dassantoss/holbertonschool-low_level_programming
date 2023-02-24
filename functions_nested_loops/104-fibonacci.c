#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers
*
* Return: Always 0.
*/
int main(void)
{
	unsigned int i, a = 1, b = 2, c;

	printf("%u, %u", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
