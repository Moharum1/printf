#include "main.h"

/**
 * to_binary - convert a number to binary
 * @num: The number we want to convert
 *
 * Return: Number of digits taken.
 */
int to_binary(unsigned int num)
{
	int count = 0;
	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		int shift = sizeof(unsigned int) * 8 - 1;
		while ((num & (1u << shift)) == 0)
		{
			shift--;
		}
		while (shift >= 0)
		{
			if (num & (1u << shift))
			{
				_putchar('1');
			       	count++;
			}
			else
			{
				_putchar('0');
				count++;
			}
			shift--;
		}
	}
       	return (count);
}

