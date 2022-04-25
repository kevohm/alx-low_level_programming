#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - listint_t
 * @n: int
 * @next: points to next node
 * 
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* functions */

size_t print_listint(const listint_t *h);

#endif