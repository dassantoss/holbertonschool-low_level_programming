/**
 * rot13 - Function that encode a string using rot13
 *
 * @str: Input string to be encode
 *
 * Return: Return encode string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j;

	while (*ptr)
	{
		j = 0;
		while (*(alpha + j))
		{
			if (*ptr == *(alpha + j))
			{
				*ptr = *(rot13 + j);
				break;
			}
			j++;
		}
		ptr++;
	}
	return (str);
}
