#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of a listint_t list.
 *@n: the integer portion of the node
 *@head: the head of the list
 *Return: the address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->next = *head;
	temp->n = n;
	*head = temp;
	if (*head == NULL)
	{
		return (NULL);
	}
	return (*head);

}
