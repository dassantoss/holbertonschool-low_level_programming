#include "main.h"

/**
 * _strcpy - function that copies the string
 *
 * @dest: Input Array integer
 * @src: Input number of elements of the array to be printed
 *
 * Return: Return a string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
