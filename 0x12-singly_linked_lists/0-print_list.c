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
		if (p == NULL)
		{
			printf("[%d] (nil)\n", i);
		}else
		{
			printf("[%d]",i);
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
