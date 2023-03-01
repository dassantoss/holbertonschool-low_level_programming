#include "main.h"

/**
 * puts2 - Function thats prints every other character of a string,
 *
 * @str: input string
 *
 * Return: No
 */
void puts2(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
		p++;
	}
	_putchar('\n');
}
