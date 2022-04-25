#include "lists.h"
#include <stdio.h>
/**
 * listint_len - size of list
 * @h: pointer to node
 * Return: size of list
 *
 *  Description: return size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (i);
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
