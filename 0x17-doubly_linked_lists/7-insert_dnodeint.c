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
	while (_head)
	{
		if (i == idx)
		{
			break;
		}
		i++;
		_head = _head->next;
		if (_head == NULL)
			return (NULL);
	}
	if (idx > i)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (_head->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	_head->prev->next = newNode;
	newNode->next = _head;
	newNode->prev = _head->prev;
	_head->prev = newNode;
	return (newNode);
}
