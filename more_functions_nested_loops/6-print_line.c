#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 *@n: Input Number
 *
 * Return: no return
 */
void print_line(int n)
{
	int cont;

	if (n > 0)
	{
		for (cont = 0; cont <= n; cont++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
