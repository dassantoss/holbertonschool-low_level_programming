#include "main.h"

/**
 * _puts - Function for print a string
 *
 * @str: input string
 *
 * Return: No
 */
void _puts(char *str)
{
	int p = 0;

	while (*(str + p) != '\0')
	{	
		_putchar(*(str + p));
		p++;
	}
	_putchar('\n');
}
