#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints values in singly linked node
 * @h: pointer to listint_t(struct listint_s)
 * Return: size of list
 *
 * Description: prints all the elements of a listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h !=  NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
