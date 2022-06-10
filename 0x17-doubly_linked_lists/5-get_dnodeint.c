#include "lists.h"
/**
 * get_dnodeint_at_index - get node at position n
 * @index: position of node
 * @head: pointer to head node
 * Return: pointer to node
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *_head = head, *current;
	unsigned int i = 0;

	while (_head)
	{
		if (i == index)
		{
			current = _head;
		}
		i++;
		_head = _head->next;
	}
	return (current);
}
