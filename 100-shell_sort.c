#include "sort.h"

/**
 * shell_sort - sort an array of integers in ascending order using the
 * shell sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t g = 1;
    size_t i, j;
	int temp;

	if (!array || size < 2)
		return;

	while (g < size / 3)
		g = g * 3 + 1;

	while (g > 0)
	{
		for (i = g; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= g && array[j - g] > temp)
			{
				array[j] = array[j - g];
				j -= g;
			}
			array[j] = temp;
		}
		g = (g - 1) / 3;
		print_array(array, size);
	}
}
