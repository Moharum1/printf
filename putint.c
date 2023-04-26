#include "main.h"

/**
 * putint - writes the integer  c to stdout
 * @x: The integer  to print
 *
 * Return: NULL.
 */
void putint(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		putint(n1 / 10);
	_putchar((n1 % 10) + '0');
}
