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

	for (cont--; cont >= 0; cont--)
		_putchar(s[cont]);
	_putchar('\n');
}
