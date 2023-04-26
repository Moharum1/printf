#include "main.h"

/**
 * putint - writes the integer  c to stdout
 * @n: The integer  to print
 *
 * Return: NULL.
 */
int putint(int n)
{
	int counter = 0;
	unsigned int n1;

	if (n < 0)
	{
		counter += _putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		putint(n1 / 10);
	counter += _putchar((n1 % 10) + '0');

	return (counter);
}
