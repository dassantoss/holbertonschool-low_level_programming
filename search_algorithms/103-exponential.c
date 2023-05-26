#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the number, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t prev = 0;
	size_t min_size;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		prev = bound;
		bound *= 2;
	}

	min_size = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, min_size);

	return (binary_search_exponential(array, prev, min_size, value));
}

/**
 * binary_search_exponential - searches for a value in a sorted array of integers
 * using the Binary search algorithm (within a given range)
 *
 * @array: input array
 * @start: starting index of the range
 * @end: ending index of the range
 * @value: value to search for
 *
 * Return: index of the number, or -1 if not found
 */
int binary_search_exponential(int *array, size_t start, size_t end, int value)
{
	size_t left = start;
	size_t right = end;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
