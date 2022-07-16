#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of int
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j + 1];

				array[j + 1] = array[j];
				array[j] = tmp;
			}
			print_array(array, size);
		}
	}
}
