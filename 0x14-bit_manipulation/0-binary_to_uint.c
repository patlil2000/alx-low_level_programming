#include "main.h"
#include <stdlib.h>
/**
 *binary_to_uint -  converts a binary to an unsigned int
 *@b: pointer to string
 *Return: returns an unsin=gned int
 */
unsigned int binary_to_uint(const char *b)
{
	size_t len_str = strlen(b);
	unsigned int result = 0;
	size_t i;

	if (b == NULL)
	{
		return (0);
	}


	for (i = 0; i < len_str; i++)
	{
		if (b[i] == '1')
		{
			result += 1 << (len_str - 1 - i);
		}
		else if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	}
	return (result);
}
/**
 *strlen - calculates length of a string
 *@b: pointer to a string
 *Return: length of a string
 */
size_t strlen(const char *b)
{
	size_t length = 0;
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
