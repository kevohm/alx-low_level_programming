#include "sort.h"
/**
 * insertion_sort_list - selectionn sort algorithm
 * @list: pointer to node
 * Return: Nothing
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list, *current = *list;
	int i = 0, j = 0, temp = 0, size = 0;

	if (!head)
	{
		return;
	}
	while (*current)
	{
		size++;
		*current = current->next;
	}
	for (;i < size-1, head->next != NULL; i++, *current = head->next)
	{
		for(j = i;j >= 0, head->prev != NULL; j--, *head = head->prev)
		{
			if(head->n < head->next->n)
			{
				temp = head->n;
				head->n = head->next->n;
				head->next->n = temp;
			}
			else
			{
				break;
			}
		}
		*head = *current
	}
}
