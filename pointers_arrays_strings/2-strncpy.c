#include "main.h"

/**
 * _strncpy - Copies a string, using at most n byt
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes from src to be used
 *
 * Return: Poiter to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
