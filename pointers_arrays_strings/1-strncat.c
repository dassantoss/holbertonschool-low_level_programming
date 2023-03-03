#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes from src to be used
 *
 * Return: Poiter to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0' && i < n)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
