#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint -  prints all the elements of a listint_t list.
 *@h: pointer to the head of the list;
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *cursor = h;

	if (cursor == NULL)
	{
		printf("Linked list does not exist");
	}
	while (cursor != NULL)
	{
		count++;
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
	return (count);
}
