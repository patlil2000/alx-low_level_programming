#include <stdio.h>
#include "main.h"

/**
 *main - prints FizzBuzz,Fizz,and Buzz
 *
 * Return: return 0 if program is successful
 */
int main(void)
{
	int i = 1;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d", i);
		}

	}
	printf("\n");
}
