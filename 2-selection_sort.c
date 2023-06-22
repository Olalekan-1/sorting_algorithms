#include "sort.h"

size_t smallest(int *array, size_t k, size_t size);

/**
 * smallest - Get the smallest element in array
 * @array: pointer to the array
 * @k: index
 * @size: the size of the array
 * Return: The position of the smallest element
 */

size_t smallest(int *array, size_t k, size_t size)
{
	size_t pos = k, i;
	int small = array[k];

	for (i = k + 1; i < size; i++)
	{
		if (array[i] < small)
		{
			small = array[i];
			pos = i;
		}
	}
	return (pos);
}

/**
 * selection_sort - implementation of selection sort
 * @array: pointer to the address of th array to sort
 * @size: size of array;
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t k, pos, temp;

	for (k = 0; k < size; k++)
	{
		pos = smallest(array, k, size);
		temp = array[k];
		array[k] = array[pos];
		array[pos] = temp;
		print_array(array, size);
	}
}
