#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("There is %b bytes in %b KB\n", 1024, 1);
	_printf("%b - %b = %b\n", 2048, 1024, 1024);
	return (1);

}
