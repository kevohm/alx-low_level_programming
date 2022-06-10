#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *_head = head;

	if (_head == NULL)
		return;
	while (_head)
	{
		free(_head->n);
		free(head)
		*head = _head = _head->next;
	}
}
