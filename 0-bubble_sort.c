#include "sort.h"

/**
 * bubble_sort - bubble sort implementation
 * @array: pointer to array of integer
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int temp,  flag = 0;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				flag = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		if (flag == 0)
			return;
	}
}


