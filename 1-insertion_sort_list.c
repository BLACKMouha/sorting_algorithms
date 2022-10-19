#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *before, *current, *after;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		after = current->next;
		before = current->prev;
		while (before && current->n < before->n)
		{
			current->next = before;
			current->prev = before->prev;
			if (before->prev)
				before->prev->next = current;
			before->prev = current;
			before->next = after;
			if (before->next)
				before->next->prev = before;
			if (!current->prev)
				*list = current;
			print_list(*list);

			before = current->prev;
			after = current->next;
		}
		current = current->next;
	}
}



















































