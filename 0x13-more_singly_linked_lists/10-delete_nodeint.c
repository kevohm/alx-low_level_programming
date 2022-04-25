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
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *temp2;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
	}
	else
	{
		temp = *head;
		for (i = 0; temp && (i < index - 1); i++, temp = temp->next)
			;
		if (temp != NULL)
		{
			temp2 = temp;
			temp = temp->next;
			temp2->next = temp->next;
			free(temp);
		}
		else
			return (-1);
	}
	return (1);
}
