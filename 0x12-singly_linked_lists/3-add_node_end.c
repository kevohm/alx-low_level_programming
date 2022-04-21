#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - inserts node at the end
 * @head: pointer to head(pointer to struct)
 * @str: pointer to char
 * Return:newNode
 *
 * Description: tranverse the lias and insert at the end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));
	unsigned int len = strlen(str);
	list_t *temp = *head;

	if (newNode == NULL)
		return (NULL);
	newNode->len = len;
	newNode->str = strdup(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	}
	return (newNode);
}
