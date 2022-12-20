#include <stdio.h>

/**
 * _puts - program prints a string followed by a newline
 * @str: string
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
