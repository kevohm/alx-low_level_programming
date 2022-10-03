#ifndef SEARCH_H
#define SEARCH_H

/*include*/
#include <stdio.h>

/*functions*/
int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

void print_array(int *array, int left, int right);

#endif
