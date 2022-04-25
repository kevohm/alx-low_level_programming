#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - remove at given index
 * @head: pointer to head
 * @index: position of node
 * Return: integer
 *
 * Description: returns 1 for success and -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int i)
{
	listint_t *current = *head;
	listint_t *prev = *head;
	unsigned int counter = 0;

	if (current == NULL)
	{
		return (-1);
	}
	while (current != NULL)
	{
		if (counter == i)
		{
			if(current->next == NULL)
			{
				prev->next = NULL;
			}
			else
			{
				prev->next = current->next;
			}
		}
		prev = current;
		current=current->next;
		counter++;
	}
	return (1);
}
