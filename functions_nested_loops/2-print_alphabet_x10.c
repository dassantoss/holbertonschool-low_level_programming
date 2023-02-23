#include "main.h"

/**
 * print_alphabet x 10 - function that prints the alphabet x 10, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 'a';

	while (i <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
		i++;
	}
}
