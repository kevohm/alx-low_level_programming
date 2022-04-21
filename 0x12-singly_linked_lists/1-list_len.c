#include <stdio.h>
#include "lists.h"
/**
 * list_len - return length of list
 * @h: pointer to list_t(struct list_s)
 * Return: size_t
 *
 * Description: traverse list and return size
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	for (; h; i++)
		h = h->next;
	return (i);
}
