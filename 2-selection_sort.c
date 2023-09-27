#include "sort.h"

/**
 * selection_sort - sorts array with selection sort algorithm
 * @array: array to sort
 * @size: size of array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t step, i, min_idx;
	int temp;

	if (array == NULL || size <= 1)
		return;

	for (step = 0; step < size - 1; step++)
	{
		min_idx = step;
		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
			{
				min_idx = i;
			}
		}
		if (min_idx != step)
		{
			temp = array[min_idx];
			array[min_idx] = array[step];
			array[step] = temp;
			print_array(array, size);
		}
	}
}
