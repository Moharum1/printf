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
	int l1,l2,l3,l4 ;

	l1 = _printf("%d\n", 1024);
	printf("%d\n",l1);
	l2 = _printf("%d\n", -1024);
	printf("%d\n",l2);
	l3 = _printf("%d\n", 0);
	printf("%d\n",l3);
	l4 = _printf("%d\n", INT_MAX);
	printf("%d\n",l4);
	return (1);

}
