#include "sort.h"

/**
 * shell_sort - Shell Sort Algorithm
 * Prototype: void shell_sort(int *array, size_t size);
 * @array: array of integers
 * @size: size of the array
 *
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t inner, outer, interval;
	int tmp;

	if (!array || !size || size < 2)
		return;

	interval = 1;
	while (interval < (size / 3))
		interval = (interval * 3) + 1;

	while (interval > 0)
	{
		for (outer = interval; outer < size; outer++)
		{
			tmp = array[outer];
			inner = outer;

			while ((inner >= interval) && (tmp <= array[inner - interval]))
			{
				array[inner] = array[inner - interval];
				inner = inner - interval;
			}
			array[inner] = tmp;
		}
		print_array(array, size);
		interval = (interval - 1) / 3;
	}
}
