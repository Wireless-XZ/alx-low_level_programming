#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t i;
		size_t idx = (size / 2) - 1;

		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			if (i == (size - 1))
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (size == 1 && array[0] != value)
			return (-1);
		else if (array[idx] == value)
			return ((int) idx);
		else if (array[idx] > value)
		{
			size = idx;
			return (binary_search(array, size, value));
		}
		else if (array[idx] < value)
		{
			array = &array[idx + 1];
			size -= (idx + 1);
			return (binary_search(array, size, value));
		}
	}

	return (-1);
}
