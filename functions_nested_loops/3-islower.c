#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * return 1 if the input is lowercase
 * return 0 in other case
 *
 * @c: The character
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
