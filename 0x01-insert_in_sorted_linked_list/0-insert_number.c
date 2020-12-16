#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @number: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */

listint_t *insert_node(listint_t **head, int number)
{

	listint_t *new;
	listint_t *current;
	
	current = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return(new);
	}

	if ((*head)->n >new->n){
		new->next= *head;
		*head = new;
		return(new);
	}

	while (current->next != NULL)
	{
		if (current->next->n < new->n)
			current = current->next;
		else
			break;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
