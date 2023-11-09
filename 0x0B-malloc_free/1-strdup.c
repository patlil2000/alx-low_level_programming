#include "main.h"
#include <stdlib.h>
/**
 *
 *
 */
char *_strdup(char *str)
{
	char *ptr;
	int j = 0;
	int i;
	int k;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
		k = j;
	}
	ptr = (char *)malloc((k + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[j + 1] = '\0';
	return (ptr);
	
}
