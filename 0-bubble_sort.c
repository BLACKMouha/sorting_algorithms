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
	size_t i;
	int tmp;
	if (!array)
		return;

	i = size - 1;
	while (array[i] && i > 0)
	{
		if (array[i-1] > array[i])
		{
			tmp = array[i];
			array[i] = array[i-1];
			array[i-1] = tmp;
			print_array(array, size);
		}
		i--;
	}
}










































