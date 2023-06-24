#include "sort.h"

void swap(int *array, int *a, int *b, size_t size);

/**
 * swap - swaps the position of element in an array
 * @a: element a
 * @b: element b
 * @array: array of integer
 * @size: size of integer
 * Return: void
 */

void swap(int *array, int *a, int *b, size_t size)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	print_array(array, size);
}
int lomuto_partition(int arr[], int low, int high, size_t size);

/**
 * lomuto_partition - implemenattion of lumuto partition
 * @arr: array of integer
 * @low: lower  bound of array
 * @high: upper bound of integer
 * @size: size of array
 * Return: index of sorted element
 */

int lomuto_partition(int arr[], int low, int high, size_t size)
{
	int pivot, i, j, temp;

	pivot = arr[high];

	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	swap(arr, &arr[i + 1], &arr[high], size);

	return (i + 1);
}
void quicksort_recurssion(int *array, int low, int high, size_t size);

/**
 * quick_sort - quick sort implementaion
 * @array: array of integer
 * @size: size of array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (size <= 1)
		return;
	quicksort_recurssion(array, 0, size - 1, size);
}

/**
 * quicksort_recurssion - quick sort recussion
 * @array: array to be sorted
 * @low: low bound of array
 * @high: upper bound of array
 * @size: of array;
 * Return: void
 */

void quicksort_recurssion(int *array, int low, int high, size_t size)
{
	int pivot_idx;

	if (low < high)
	{
		pivot_idx = lomuto_partition(array, low, high, size);

		quicksort_recurssion(array, low, pivot_idx - 1, size);
		quicksort_recurssion(array, pivot_idx + 1, high, size);
	}
}
