#include "sort.h"

/**
 * insertion_sort_list - sort the array
 *
 * @list: The list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous;

	if ((*list) == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		previous = current->prev;

		while (previous != NULL && previous->n > current->n)
		{
			if (previous->prev)
				previous->prev->next = current;
			if (current->next)
				current->next->prev = previous;
			previous->next = current->next;
			current->prev = previous->prev;
			previous->prev = current;
			current->next = previous;

			previous = current->prev;

			if (previous == NULL)
				*list = current;
			print_list(*list);
		}
		current = current->next;
	}
}
