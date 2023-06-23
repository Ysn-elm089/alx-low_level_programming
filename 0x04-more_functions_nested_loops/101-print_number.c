#include "main.h"

/**
 * print_numbers - prints an integer
 * @n: integer to be printed
 *
 * Description: This function prints an integer to the standard output.
 * If the integer is negative, it prints a minus sign before the number.
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
