#include "main.h"

/**
 * wildcmp - Function that compare two strings
 *
 * @s1: Input string 1
 * @s2: Input string 2
 *
 * Return: 1 if strings can be considerade identical
 * Otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '0')
	{
		if (*s2 == '\0')
			return (1);
		else if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		else
			return (0);
	}
	else if (*s2 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else
		return (0);
}
