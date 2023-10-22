#include "sort.h"

/**
 * bubble_sort - sorting an array using bubble sort algorithm
 *
 * @array: the array to sort
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	if (size < 2 || !array)
		return;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
