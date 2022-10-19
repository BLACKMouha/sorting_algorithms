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
	int tmp;

	if (!array || size < 2 || !size)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
