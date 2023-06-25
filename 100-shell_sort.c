#include "sort.h"

/**
 * shell_sort - shell sort implementation
 * @array: array of integer
 * @size: size of array
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	gap = 1;
	while (gap <= size / 3)
	{
		gap = 3 * gap + 1;
	}

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}

