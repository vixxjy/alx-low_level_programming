#include "main.h"

/**
 * function that prints a string, in reverse, followed by a new line.
 *
 * @v: string to be printed
v */
void print_rev(char *v)
{
	int i, j, len;

	i = 0;

	while (v[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(v[j]);
	}

	_putchar('\n');
}
