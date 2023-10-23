#include "sort.h"

/**
 * quick_sort_partition - quick sort helper function
 *
 * @array: The array
 * @low: a variable
 * @high: a variable
 * @size: The size of the array
 */

void quick_sort_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int left = low - 1;
	int i = low;
	int temp;

	if (low < high)
	{
		while (i <= high - 1)
		{
			if (array[i] <= pivot)
			{
				left++;
				if (i != left)
				{
					temp = array[left];
					array[left] = array[i];
					array[i] = temp;
					print_array(array, size);
				}
			}
			i++;
		}
		if (left + 1 != high)
		{
			temp = array[left + 1];
			array[left + 1] = array[high];
			array[high] = temp;
			print_array(array, size);
		}
		quick_sort_partition(array, low, left + 1 - 1, size);
		quick_sort_partition(array, left + 1 + 1, high, size);
	}
}

/**
 * quick_sort - quick sort function
 *
 * @array: The array
 * @size: The size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_partition(array, 0, size - 1, size);
}
