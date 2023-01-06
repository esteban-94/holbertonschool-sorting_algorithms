#include "sort.h"

/**
 * 
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
 * 
*/

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_part(array, 0, size - 1, size);
}
