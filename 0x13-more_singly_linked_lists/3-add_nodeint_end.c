#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the beginning of a listint_t list.
 *@head: pointer to another pointer
 *@n: integer portion of the node
 *Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		listint_t *cursor = *head;

		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}
		cursor->next = temp;
	}
	return (temp);


}
