#include <stdio.h>
/**
 *main - prints the number of arguments passed
 *@argc:number of arguments
 *@argv:array of arguments
 *Return: return 0 if program is successful
 *
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
