#include "search_algos.h"
#include <math.h>
/**
 * binary_search - searches for a value using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: if value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	while (left <= right)
	{
		mid = floor((right + left) / 2);
		print_array(array, left, right);
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}

/**
 * print_array - prints section of array
 * @array - pointer to array
 * @left - point to starting point of array (index)
 * @right - points to ending point of array (index)
 * Return: Nothing
 */
void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		if (left == right)
		{
			printf("%d\n", array[left]);
		}
		else
		{
			printf("%d, ", array[left]);
		}
		++left;
	}
}
