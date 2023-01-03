#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: array pointer
 * @b: constant byte to fill memory
 * @n: conditional limit
 *
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;
	char *x = s, value = b;

	i = 0;
	while (i < n)
	{
		x[i] = value;
		i++;
	}
	return (x);
}
