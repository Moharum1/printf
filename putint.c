#include "main.h"
#include <stdlib.h>

/**
 * putint - writes the integer  c to stdout
 * @n: The integer  to print
 *
 * Return: NULL.
 */
int putint(int n)
{
	unsigned int n1;
	int digits[10]; 
	int final = 0;
	int counter = 0;
	int i;


	if (n < 0)
	{
		final += _putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}
	
	if (n1 > 0)
	{
		while (n1)
		{
			digits[counter] = n1 % 10;
			n1 /= 10;
			counter++;
		}

		for (i = counter - 1; i >= 0; i--)
		{
			_putchar(digits[i] + '0');
			final++;
		}
	}
	else 
	{
		_putchar(n1 % 10 + '0');
		final++;

	}
	
	return (final);
}

int put_unsign(int n)
{
	unsigned int n1;
	int digits[10];
	int final = 0;
	int counter = 0;
	int i;

	
	if (n < 0)
	{
		n1 = -n;
	}
	else
	{
		n1 = n;
	}
	
	if (n1 > 0)
	{
		while (n1)
		{
			digits[counter] = n1 % 10;
			n1 /= 10;
			counter++;
		}
		
		for (i = counter - 1; i >= 0; i--)
		{
			_putchar(digits[i] + '0');
			final++;
		}
	}
	
	else
	{
		_putchar(n1 % 10 + '0');
		final++;
	}

	return (final);

}
