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
					putint(i);
					break;
			
				case 'd':
					i = va_arg(ap, int);
					putint(i);
					break;

				case '%':
					_putchar('%');
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
