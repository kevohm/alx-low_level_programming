#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - finde by id
 * @head: pointer to head
 * @index: integer
 * Return: instance of listint_t
 *
 * Description: find node by using index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);
	for (; ptr; ptr = ptr->next)
	{
		if (i == index)
			return (ptr);
		i++;
	}
	return (NULL);
}
