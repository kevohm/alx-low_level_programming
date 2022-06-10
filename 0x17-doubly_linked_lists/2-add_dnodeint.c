#include "lists.h"
/**
 * add_dnodeint - add node at start
 * @head: pointer to pointer to head
 * @n: integer
 * Return: pointer to node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *_head = *head, *newNode;

	newNode = malloc(sizeof(dlistint_t *));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (_head != NULL)
		_head->prev = newNode;
	newNode->next = _head;
	*head = newNode;
	return (newNode);
}
