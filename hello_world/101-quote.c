#include<stdio.h>
/**
 *	main - Entry point
 *
 *	Return: Always 1 (Success)
 */
int main(void)
{
	char text[]="and that piece of art is useful\" - Dora korpar, 2015-10-19\n";
	write(2, text, 59);
	return (1);
}
