#include "sort.h"

/**
 * selection_sort - sort the array
 *
 * @array: The array to be printed
 * @len: len of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int index, tmp;

	for (i = 0; i < size; i++)
	{
		index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[index] > array[j])
				index = i;
		}
		if (index != i)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
