#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return 0;
	}
	while (h != NULL)
	{
		char *p = h->str;
		int size = h->len;

		if (p == NULL)
		{
			printf("[0] (nil)\n");
		}else
		{
			printf("[%d]",size);
			while (*p)
			{
				printf("%c", *p);
				p++;
			}
			printf("\n");
		}
		i++;
		h = h->next;
	}
	return (i);
}
