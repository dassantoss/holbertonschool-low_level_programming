#include "main.h"

/**
 * print_rev - Function for print a string in reverse
 *
 * @s: input string
 *
 * Return: No
 */
void print_rev(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
		cont++;

	while (cont >= 0)
	{
		_puthar(*(s + cont));
		cont--;
	}
	_putchar('\n');
}
