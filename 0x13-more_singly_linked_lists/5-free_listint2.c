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
	listint_t *ptr, *current;

	if (*head == NULL || head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		ptr = current;
		current = (current)->next;
		free(ptr);
	}
	*head = NULL;
	head = NULL;
}

