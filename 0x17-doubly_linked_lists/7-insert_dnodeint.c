#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at position
 * @h:  pointer to pointer to head node
 * @n: value to node
 * @idx: position
 * Return: pointer to node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *_head = *h, *newNode;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t *));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (_head == NULL)
	{
		*h = newNode;
		return (newNode);
	}
	while (_head)
	{
		if (i == idx)
		{
			break;
		}
		i++;
		_head = _head->next;
	}
	if (idx > i || _head == NULL)
		return (NULL);
	if (_head->prev)
		_head->prev->next = newNode;
	else
	{
		*h = newNode;
	}
	newNode->next = _head;
	newNode->prev = _head->prev;
	_head->prev = newNode;
	return (newNode);
}
