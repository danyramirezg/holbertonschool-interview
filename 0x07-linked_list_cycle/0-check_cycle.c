
#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle in it
 * @list: Structure
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *point1, *point2;

	point1 = list;
	point2 = list;

	while (point1 != NULL && point2 != NULL && point2->next != NULL)
	{
		point2 = point2->next->next;
		point1 = point1->next;

		if (point1 == point2)
		{
			return (1);
		}
	}
	return (0);
}
