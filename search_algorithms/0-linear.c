#include "search_algos.h"

/**
 * linear_search - search for an array of integers
 * @array: pointer to the first element of the array to search
 * @size:number of elements in an array
 * @value: value
 *
 * Return: value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			break;
	}
	if (i == size)
		return (-1);

	return (i);
}
