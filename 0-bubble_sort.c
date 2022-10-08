#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * Prototype: void bubble_sort(int *array, size_t size);
 * @array: an array of integers
 * @size: size of @array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, swapped;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
