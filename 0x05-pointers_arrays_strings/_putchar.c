#include <unistd.h>

/*
 * putchar for main functions
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
