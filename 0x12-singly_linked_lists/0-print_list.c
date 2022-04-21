#include <stdio.h>
#include "lists.h"
/**
 * print_list - print out node values
 * @h: pointer to struct list_t
 * Return: size_t
 *
 * Description: return size of list and print details of each struct
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		char *p = h->str;
		int size = h->len;

		if (p == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s", size, p);
			printf("\n");
		}
		i++;
		h = h->next;
	}
	return (i);
}
