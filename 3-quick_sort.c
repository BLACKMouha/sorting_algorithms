#include "sort.h"

/** Prototypes */
int partition(int *array, int lo, int hi, int size);
void qs(int *array, int lo, int hi, int size);

/**
 * quick_sort - Quicksort Algorithm implementation
 * Prototype: void quick_sort(int *array, size_t size);
 * @array: array of integers
 * @size: size of the array
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	qs(array, 0, size - 1, size);
}


/**
 * partition - selects a pivot and sort around it
 * Prototype: int partition(int *arr, int lo, int hi, int size);
 * @array: array of integers
 * @lo: lowest index
 * @hi: highest index
 * @size: size of the array
 *
 * Return: the index of the pivot
 */
int partition(int *arr, int lo, int hi, int size)
{
	int pvt, tmp, j, i;

	pvt = arr[hi];
	j = lo - 1;

	for (i = lo; i <= hi; i++)
	{
		if (arr[i] <= pvt && i != ++j)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			print_array(arr, size);

		}
	}
	return (j);
}

/**
 * qs - recursive call of the quick_sort function
 * Prototype: void qs(int *array, int lo, int hi, int size);
 * @array: array of integers
 * @lo: lowest index
 * @hi: highest index
 * @size: size of the array
 *
 * Return: Nothing
 */
void qs(int *array, int lo, int hi, int size)
{
	int p;

	if (lo >= hi)
		return;

	p = partition(array, lo, hi, size);

	qs(array, lo, p - 1, size);
	qs(array, p + 1, hi, size);
}
