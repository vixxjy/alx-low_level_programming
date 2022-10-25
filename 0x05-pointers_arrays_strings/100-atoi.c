#include "main.h"

/**
 * function that convert a string to an integer.
 *
 * @v: string to be converted
 */
int _atoi(char *v)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (v[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (v[i] == '-')
			++d;
		if (v[i] >= '0' && v[i] <= '9')
		{
			digit = v[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (v[i + 1] < '0' || v[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (n);
}
