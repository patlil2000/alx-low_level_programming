#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 *
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
