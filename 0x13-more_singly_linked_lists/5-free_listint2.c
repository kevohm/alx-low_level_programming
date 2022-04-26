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
	listint_t *ptr;
	if (*head == NULL || head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
	head = NULL;
}

