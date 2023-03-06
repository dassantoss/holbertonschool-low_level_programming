#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse using recursion
 *
 * @s: Input string
 *
 * Return: No return
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
