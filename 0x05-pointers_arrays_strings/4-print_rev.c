#include <stdio.h>

/**
 * print_rev - program prints string in reverse followed by a newline
 * @s: the string
 *
 */
void print_rev(char *s)
{
	int i, r;

	/*moves through length of a string*/
	for  (i = 0; s[i] != '\0'; i++)
	{
	}

	/*reverses length of srting*/
	for (r = i - 1; r >= s[i]; r--)
	{
		putchar(s[r]);
	}
	putchar('\n');
}
