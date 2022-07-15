#include "sort.h"
/**
 * selection_sort - selection sort algorithm
 * @array: pointer to array
 * @size: size of array
 *
 */
void selection_sort(int *array, size_t size)
{
	int i = 0, j = 0;

	for (; i < size; i++)
	{
		min = array[i];
		for (j = 0; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				array[j] = array[i];
			}
		}
	}
}
