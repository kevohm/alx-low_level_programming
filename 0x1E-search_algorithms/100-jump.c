#include "search_algos.h"
#include <math.h>
/**
 * min - min value
 * @a: integer
 * @b: integer
 * Return: integer
 */
size_t min(int a, int b){
	size_t ans;
	if(b>a)
		ans = a;
	else
		ans = b;
	return ans;
}
/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: value is not present in array or if array is NULL, must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0;
	while (array[min(step, size) - 1] < value)
	{
		int i = min(step, size) - 1;

		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return -1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", step, prev);
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return -1;
	}
	if (array[prev] == value)
		return prev;
	return -1;
}
