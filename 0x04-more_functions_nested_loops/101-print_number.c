#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - prints numbers
 * @a: number to be printed
 * Return:void
 */

void print_number(int a)
{

	unsigned int a1 = 0;

	if  (a < 0)
	{
	 	a1 = -a;
		_putchar('-');
	}

	else
	{
		a1 = a;
	}

	if (a1 / 10)
	{
		print_number(a1 / 10);
	}

	_putchar((a1 % 10) + '0');
}
