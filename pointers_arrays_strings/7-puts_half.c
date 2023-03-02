#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: Input string
 *
 * Return: No return
 */
void puts_half(char *str)
{
	int i, start_pos, len = 0;

	while (str[len] != '\0')
		len++;

	start_pos = len / 2;

	if (len % 2 == 1)
		start_pos++;

	for (i = start_pos; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
