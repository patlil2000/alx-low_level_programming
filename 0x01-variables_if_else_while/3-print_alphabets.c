#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase..
 *
 * Return: returns 0 when program is successful
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
