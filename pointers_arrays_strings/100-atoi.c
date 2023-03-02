#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: Input String
 *
 * Return: Return Integer
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	unsigned int sign = 1;

	while (*s && (*s < '0' || *s > '9'))
	{
    		if (*s == '-')
			sign = -sign;
		s++;
	}

	while (*s && (*s >= '0' && *s <= '9'))
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return (sign * res);
}
