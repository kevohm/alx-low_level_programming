#ifndef LIST_H
#define LIST_H
/**
 * struct list_s - linked list
 * @str: string
 * @next: pointer to next node
 * @len: length of string
 *
 * Description: singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

#endif
