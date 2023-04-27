#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - writes the String c to stdout
 * @format: The String to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char *s;
	int counter;
	const char *ch_char;
	unsigned int i;
	
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(ap,format);
	counter = 0;

	for (ch_char = (char *)format; *ch_char != '\0'; ch_char++)
	{
		if (*ch_char == '%')
		{
			ch_char++;
			switch (*ch_char)
			{
				case 'c':
					i = va_arg(ap, int);
					counter += _putchar(i);
					break;
			
				case 's':
					s = va_arg(ap, char *);
					while (*s != '\0')
					{
						counter += _putchar(*s);
						s++;
					}
					break;
			
				case 'i':
					i = va_arg(ap, int);
					counter += putint(i);
					break;
			
				case 'd':
					i = va_arg(ap, int);
					counter += putint(i);
					break;

				case '%':
					counter = counter + _putchar('%');
					break;

				case 'b':
					i = va_arg(ap, unsigned int);
					counter += to_binary(i);
					break;

				case 'o':
					i = va_arg(ap, unsigned int);
					counter += to_octal(i);
					break;

				case 'u':
					i = va_arg(ap, unsigned int);
					counter += put_unsign(i);
					break;

				case 'X':
					i = va_arg(ap, unsigned int);
					counter += to_Hex(i);
					break;

				case 'x':
					i = va_arg(ap, unsigned int);
					counter += to_hex(i);
					break;

				default :
					ch_char--;
					counter += _putchar(*ch_char);
					ch_char++;
					counter += _putchar(*ch_char);
					break;
			}
		}
		else 
		{
			counter += _putchar(*ch_char);	
		}
	}

	va_end(ap);
	return (counter);
}
