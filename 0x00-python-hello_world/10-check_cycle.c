#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list have a cycle.
 * @list: A singly-linked list.
 *
 * Return: If cycle is not available - 0.
 *         If cycle is available- 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
