#include "lists.h"
/**
 * print_dlistint - print doublylinked list
 * @h: pointer to first node
 * Return: size_t(size of list)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *_head = h;

	if(_head == NULL)
		return(len);
	while(_head)
	{
		printf("%d\n",_head->n);
		len++;
		_head = _head->next;
	}
	return(len);
}
