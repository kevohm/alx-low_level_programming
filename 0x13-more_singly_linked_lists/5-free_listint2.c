#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - set head to NULL
 * @head: pointer  to head(pointer to struct)
 * Return: Nothing
 *
 * Description: free memory and set head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	if (!head)
		return;
	current = *head;
	while (current)
	{
		tmp = current;
		current = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}
