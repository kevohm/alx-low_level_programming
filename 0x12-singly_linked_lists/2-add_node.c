#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - insert newNode
 * @head: pointer to head(pointer to struct)
 * @str: pointer to char
 * Return: newNode
 *
 * Description: add a newNode and return it
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = strlen(str);
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
