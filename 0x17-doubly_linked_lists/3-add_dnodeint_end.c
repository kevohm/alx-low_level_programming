#include "lists.h"
/**
 * add_dnodeint_end - add_dnodeint
 * @n: integer
 * @head: pointer to pointer to node
 * Return: node pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *_head = *head, *newNode;

	newNode = malloc(sizeof(dlistint_t *));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (_head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (_head->next)
	{
		_head = _head->next;
	}
	_head->next = newNode;
	newNode->prev = _head;
	return (newNode);
}
