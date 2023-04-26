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
	_printf("%d", 1024);
	_printf("%d", -1024);
	_printf("%d", 0);
	_printf("%d", INT_MAX);
	return (1);

}
