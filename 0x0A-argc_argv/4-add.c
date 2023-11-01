#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main-program that adds positive numbers
 *@argc:number of arguments
 *@argv:array of arguments
 *Return: return 0 if successful
 */
int main(int argc, char *argv[])
{
	int i = 0;

	int k;

	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (k = 0; argv[i][k] != '\0'; k++)
			{
				if (!isdigit(argv[i][k]))
				{
					printf("Error\n");

					return (1);

				}
			}

		}
	}
	for (i = 1; i < argc; i++)
	{
		int j = atoi(argv[i]);

		result += j;
	}
	printf("%d\n", result);

	return (0);
}
