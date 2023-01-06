#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

/**
 * 
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
		array[x +1] = array[right];
		array[right] = temp;
		print_array(array, size);
	}
	return (x + 1);
}
