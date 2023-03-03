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
	int i, sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int sep_word_size = 13;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			if (ptr == str)
				*ptr -= 32;
			else
			{
				for (i = 0; i < sep_word_size; i++)
				{
					if (*(ptr - 1) == sep_words[i])
					{
						*ptr -= 32;
						break;
					}
				}
			}
		}
		ptr++;
	}
	return (str);
}
