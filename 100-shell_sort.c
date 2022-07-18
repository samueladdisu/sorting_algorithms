#include "sort.h"
/**
 * shell_sort - sort array using Knuth sequence
 * @array: array of int
 * @size: size of the array
 *
 */

void shell_sort(int *array, size_t size)
{
	size_t i, j, n = 0;
	int temp;

	if (array == NULL || size < 2)
		return;

	while ((n = n * 3 + 1) < size)
		;

	for (n = (n - 1) / 3; n > 0; n = (n - 1) / 3)
	{
		for (i = n; i < size; i += 1)
		{
			temp = array[i];
			for (j = i; j >= n && array[j - n] > temp; j -= n)
			{
				array[j] = array[j - n];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}
