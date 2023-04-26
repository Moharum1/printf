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
	int l1;
	l1 = _printf("%b\n", 98);
	printf("%d\n",l1);
	return (1);

}
