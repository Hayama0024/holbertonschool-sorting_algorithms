#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts array in ascending order using Bubble Sort
 * @array: Pointer to array to sort
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - &; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tamp;

				print_array(array, size);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
