#include "main.h"

/**
 * _islower-checks for lowercase character
 *
 *@c: character to be checked
 *
 * Return: return 0 if successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
