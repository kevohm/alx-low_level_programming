#include "lists.h"
/**
 * sum_dlistint - get sum of data
 * @head: pointer to head node
 * Return: integer
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *_head = head;
	int sum = 0;

	if (_head == NULL)
		return (0);
	while (_head)
	{
		sum +=  _head->n;
		_head = _head->next;
	}
	return (sum);
}
