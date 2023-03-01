#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 *
 * @s: Input string
 *
 * Return: Lenght of a string
 */
int _strlen(char *s)
{
	int cont = 0;
	int len = 0;

	while (*(s + cont) != '\0')
	{
		cont++;
		len++;
	}
	return (len);
}
