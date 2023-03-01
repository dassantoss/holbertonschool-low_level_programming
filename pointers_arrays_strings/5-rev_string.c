#include "main.h"

/**
 * rev_string - Function function that reverses a string.
 *
 * @s: input string
 *
 * Return: No
 */
void rev_string(char *s)
{
	int len = 0, p = 0;
	char tmp;

	if (*s == '\0')
		return;

	while (s[len] != '\0')
		len++;

	for (p = 0; p < len / 2; p++)
	{
		tmp = s[p];
		s[p] = s[len - 1 - p];
		s[len - 1 - p] = tmp;
	}
}
