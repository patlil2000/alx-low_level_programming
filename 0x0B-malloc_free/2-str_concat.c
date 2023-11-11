#include "main.h"
#include <stdlib.h>
/**
 *str_concat - a function that concatenates two strings.
 *@s1: first string
 *@s2: second string
 *Return: returns a pointer new memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int j = 0;
	int i;
	int k = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		j++;

	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		k++;
	}
	ptr = (char *)malloc((j + k + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < k; i++)
	{
		ptr[j + i] = s2[i];
	}
	ptr[j + k + 1] = '\0';
	return (ptr);
}
