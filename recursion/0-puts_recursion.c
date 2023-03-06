#include "main.h"
#include <stdio.h>

/*
 * _puts_recursion - Function that prints a string using recursion
 *
 * @s: Input string
 *
 * Return: No return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{	
		_putchar(*s);	
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
