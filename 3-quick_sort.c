#include "sort.h"

/**
 * division - the given array around the selected pivot.
 * @array: number list.
 * @size: array´s size.
 * @left: right position.
 * @right: left position.
 * return: x + 1.
*/

int division(int *array, int left, int right, size_t size)
{
	int piv = array[right], x = left - 1, y, temp = 0;

	for (y = left; y <= right - 1; y++)
	{
		if (array[y] <= piv)
		{
			x++;
			if (x != y)
			{
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
		}
	}

	temp = 0;
	if (array[right] < array[x + 1])
	{
		temp = array[x + 1];
		array[x + 1] = array[right];
		array[right] = temp;
		print_array(array, size);
	}
	return (x + 1);
}

/**
 * quick_sort_part - divide the column into two parts
 * and align their parts.
 * @array: number list.
 * @size: array´s size.
 * @left: right position.
 * @right: left position.
*/

void quick_sort_part(int *array, int left, int right, size_t size)
{
	int piv;

	if  (left >= right || left < 0)
		return;
	piv = division(array, left, right, size);
	quick_sort_part(array, left, piv - 1, size);
	quick_sort_part(array, piv + 1, right, size);
}

/**
 * quick_sort - sorts an array of integers in ascending order.
 * @array: number list.
 * @size: array´s size.
*/

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_part(array, 0, size - 1, size);
}
