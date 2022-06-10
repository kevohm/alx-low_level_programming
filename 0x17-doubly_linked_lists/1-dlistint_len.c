#include "lists.h"
/**
 * dlistint_len - return length
 * @h: pointer to head node
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *_head = h;
	size_t len = 0;

	if (_head == NULL)
		return (len);
	while (_head)
	{
		len++;
		_head = _head->next;
	}
	return (len);
}
