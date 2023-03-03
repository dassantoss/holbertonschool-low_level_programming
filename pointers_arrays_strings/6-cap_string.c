#include "main.h"

/**
 * cap_string - Function that capitalizes all words of string
 *
 * @str: Input string
 *
 * Return: String
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}
	return (str);
}
