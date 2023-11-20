#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - returns the number of elements in a linked list
 *@h: head of list
 *Return: return the number of elements
 */
size_t listint_len(const listint_t *h)
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
		cursor = cursor->next;
	}
	return (count);
}
