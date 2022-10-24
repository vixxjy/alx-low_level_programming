#include "main.h"

/**
 * function that reverses a string.
 *
 * @v: string to be reversed
 */
void rev_string(char *v)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (v[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = v[i];
		v[i] = v[len1];
		v[len1--] = tmp;
	}
}	
