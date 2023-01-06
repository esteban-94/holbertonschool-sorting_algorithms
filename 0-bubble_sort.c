#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm.
 * @array: array of integers
 * @size: array´s size.
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, temp;

	if (size < 2)
		return;

	while (i < size - 1)
	{
		while (j < size -i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		j++;
		}
	i++;
	}
}
