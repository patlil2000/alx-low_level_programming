#include <stdio.h>
#include <stdlib.h>
/**
 *main-  a program that multiplies two numbers
 *@argc:number of arguments
 *@argv:array of arguments
 *Return: return 0 if program is sucessful
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);

		int j = atoi(argv[2]);

		result = i * j;
		printf("%d\n", result);
	}

	return (0);
}
