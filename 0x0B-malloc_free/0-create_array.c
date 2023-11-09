#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars,
 *and initializes it with a specific char.
 *@size: size of the array
 *@c: a specific character
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
