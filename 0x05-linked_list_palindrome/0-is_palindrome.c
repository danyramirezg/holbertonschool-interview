#include "lists.h"

/**
 * reverse - recursive function
 * @first: pointer to head of list
 * @second: pointer to the list
 *
 * Return: temp
 */

int reverse(listint_t **first, listint_t *second)
{
	int temp;

	if (second == NULL)
		return (1);

	temp = reverse(first, second->next);
	if (temp == 0)
		return (0);

	temp = (second->n == (*first)->n);
	*first = (*first)->next;

	return (temp);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{

	if (head == NULL)
		return (0);
	return (reverse(head, *head));
}
