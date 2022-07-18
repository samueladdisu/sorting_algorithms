#include "sort.h"
/**
 * shell_sort - sort array using Knuth sequence
 * @array: array of int
 * @size: size of the array
 *
 */

void shell_sort(int *array, size_t size)
{
	size_t i, j, interval;
	int temp;

	for (interval = size / 2; interval > 0; interval /= 2)
	{
		for (i = interval; i < size; i += 1)
		{
			temp = array[i];
			
			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
			print_array(array, size);
		}
	}
}
