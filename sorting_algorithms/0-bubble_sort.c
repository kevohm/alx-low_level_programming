#include "main.h"
/**
 * bubble_sort - sorting algorithm
 * @array: pointer to array
 * @size: size of array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, j = 0, temp = 0;

	for (;i < size; i++)
	{
		for(j = 0; j < size - i; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				print_array(array, size);
			}
		}
	}
}
