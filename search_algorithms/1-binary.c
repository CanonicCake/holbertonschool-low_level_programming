#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: prints an array from left to right
 * @left: left of array
 * @right: right of array
 *
 * Return: void
 */

void print_array(int array[], size_t left, size_t right)
{
	printf("Searching in array: ");

	while (left <= right)
	{
		printf("%d", array[left]);
		if (left != right)
			printf(", ");
		left++;
	}
	printf("\n");
}
/**
 * binary_search - searches a sorted array unsing binary
 * @array: pointer to first element to search
 * @size: number of elements
 * @value: value to search for
 *
 * Return: -1 if value is not present, and value otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, middle, right;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		middle = left + (right - left) / 2;

		if (array[middle] < value)
		{
			left = middle + 1;
		}

		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else if (array[middle] == value)
		{
			return (middle);
		}
	}
	return (-1);
}
