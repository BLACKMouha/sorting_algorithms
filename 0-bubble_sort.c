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
	size_t i, j, len;
	int tmp;

	if (!array)
		return;

	len = size;
	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < len)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
