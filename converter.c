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


int to_octal(unsigned int num)
{
	int i = 0;
	int counter = 0;
	int *result = malloc(sizeof(int) * 12);
	int j;

	do
	{
		result[i++] = (num % 8);
		num /= 8;
		counter++;
	}
	while (num != 0);

	for (j = 0; j < counter; j++)
	{
		_putchar(result[counter-j]);
	}

	free(result);

	return (counter);
}


int to_Hex(unsigned int num)
{
	char result[9];
	int i = 0;
	int j;	

	do
	{
		int hex_digit = num % 16;
		if (hex_digit < 10)
		{
			result[i++] = hex_digit + '0';
		}
		else
		{
			result[i++] = hex_digit - 10 + 'A';
		}
		num /= 16;
	} 
	while (num != 0);
	
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(result[j]);
	}
    
    return (i);
}

int to_hex(unsigned int num)
{
        char result[9];
        int i = 0;
	int j;

        do
        {
                int hex_digit = num % 16;
                if (hex_digit < 10)
                {
                        result[i++] = hex_digit + '0';
                }
                else
                {
                        result[i++] = hex_digit - 10 + 'a';
                }
                num /= 16;
        }
        while (num != 0);

        for (j = i - 1; j >= 0; j--)
        {
                _putchar(result[j]);
        }

    return (i);
}

