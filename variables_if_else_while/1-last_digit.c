#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	
	int the_last_digit = n % 10;

	if (the_last_digit == 0)
		printf("%d and is 0\n", the_last_digit);
	else if (the_last_digit > 5)
		printf("%d and is greater than 5\n", the_last_digit);
	else
		printf("%d and is less than 6 and not 0\n", the_last_digit);

	return (0);
}
