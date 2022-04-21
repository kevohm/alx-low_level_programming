#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free memory allocated to list
 * @head: pointer to struct
 * Return: nothing
 *
 * Description: free memory
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
