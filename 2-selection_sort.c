#include "sort.h"

/**
 * selection_sort - Selection Sort Algorithm
 * Prototype: void selection_sort(int *a, size_t size);
 * @a: array of integers
 * @size: size of the array
 *
 * Return: Nothing
 */

void selection_sort(int *a, size_t size)
{
	size_t i, j, jMin;
	int tmp;

	for (i = 0; i < size - 1 ; i++)
	{
		jMin = i;
		for (j = i + 1; j < size; j++)
		{
			if (a[j] < a[jMin])
				jMin = j;
		}
		if (jMin != i)
		{
			tmp = a[jMin];
			a[jMin] = a[i];
			a[i] = tmp;
		}
		print_array(a, size);
	}
}





































