#include "main.h"

/**
 * _abs - function that prints the sign of a number.
 *
 * @i: Integer number
 *
 * Return: a value
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
