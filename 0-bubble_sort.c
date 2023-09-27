#include "sort.h"

/**
 * bubble_sort - function to sort array using bubble sort algorithm
 * @array: array to sort
 * @size: size of array to sort
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t step, i;
	int temp;

	if (size <= 1 || array == NULL)
	{
		return;
	}
	for (step = 0; step < size - 1; step++)
	{
		int swapped = 0;

		for (i = 0; i < size - step - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}
