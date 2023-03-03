#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters to uppercase
 *
 * @str: Pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (str);
}
