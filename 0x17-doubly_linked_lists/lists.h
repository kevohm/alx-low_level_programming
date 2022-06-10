#ifndef LIST_H
#define LIST_H

/*define*/
#include <stdio.h>
#include <stdlib.h>
/**
 * struct node - struct
 * @n: integer
 * @next: pointer to next node
 * @prev: pointer to prev node
 */
typedef struct node
{
	int n;
	struct node *next;
	struct node *prev;
} dlistint_t;

/*functions*/

size_t print_dlistint(const dlistint_t *h);

#endif
