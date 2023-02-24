#include <stdio.h>

/**
* main - Computes the sum of the even-valued Fibonacci terms
*        that do not exceed 4,000,000
*
* Return: Always 0.
*/
int main(void)
{
	int i, j, sum;
	long int fib;

	i = 1;
	j = 2;
	sum = 0;
	while (j <= 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		fib = i + j;
		i = j;
		j = fib;
	}
	printf("%d\n", sum);
	return (0);
}
