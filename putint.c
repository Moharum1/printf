#include "main.h"

/**
 * putint - writes the integer  c to stdout
 * @x: The integer  to print
 *
 * Return: NULL.
 */
void putint(int x)
{
	if (x)
	{
		putint(x / 10);
		_putchar('0' + x % 10);
	}
}
