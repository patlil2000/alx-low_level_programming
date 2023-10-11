#include "main.h"

/**
 *_isalpha- checks for alphabetic character
 *
 *@c: checks character
 *
 * Return: returns 0 if successful
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
