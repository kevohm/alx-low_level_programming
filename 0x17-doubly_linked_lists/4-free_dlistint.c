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
	while (head != NULL)
	{
		_head = head;
		head = head->next;
		free(_head);
	}
	head = NULL;
}
