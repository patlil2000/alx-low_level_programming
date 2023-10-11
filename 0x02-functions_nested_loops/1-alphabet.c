#include "main.h"

/**
 *print_alphabet - prints the alphabet, in lowercase
 *
 * Return - return 0 if program is successful
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
