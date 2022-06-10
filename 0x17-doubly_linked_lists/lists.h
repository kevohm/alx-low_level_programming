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

size_t dlistint_len(const dlistint_t *h);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

void free_dlistint(dlistint_t *head);

#endif
