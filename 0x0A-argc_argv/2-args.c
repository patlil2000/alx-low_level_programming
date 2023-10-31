#include <stdio.h>
/**
 *main-program that prints all arguments it receives.
 *@argc:number of arguments
 *@argv:array of arguments
 *Return: return 0 if program is successful
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
