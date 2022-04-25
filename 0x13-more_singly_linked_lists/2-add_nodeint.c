#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node to beginning
 * @head: pointer to head(pointer to node)
 * @n: integer
 * Return:instanceof listint_t
 *
 * Description: add newNode and return a pointer to it
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
