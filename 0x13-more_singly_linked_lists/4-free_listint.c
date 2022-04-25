#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free allocated memory to list
 * @head: pointer to struct
 * Return: nothing
 *
 * Description: free memory allocated
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	for (temp = head; temp; temp = temp->next)
		free(temp);
}
