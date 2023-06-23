#include "sort.h"

size_t smallest(int *array, size_t k, size_t size);

/**
 * smallest - Get the smallest element in array
 * @array: pointer to the array
 * @k: index
 * @size: the size of the array
 * Return: The position of the smallest element
 */

/*size_t smallest(int *array, size_t k, size_t size)
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
}*/

/**
 * selection_sort - implementation of selection sort
 * @array: pointer to the address of th array to sort
 * @size: size of array;
 * Return: void
 */
/*
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
*/


void swap(int *a, int *b);

/**
 * swap - swap to element in array
 * @a: first element
 * @b: second element;
 * Return
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				min = j;
			}
		}
		if (array[min] != array[i] || min != i)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}

	}
}
