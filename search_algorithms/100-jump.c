#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t curr = 0;

	if (array == NULL)
		return (-1);

	if (array[curr] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		return (curr);
	}

	while (curr < size && array[curr] < value)
	{
		prev = curr;
		curr += step;

		if (prev >= size)
			return (-1);

		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

	while (prev < size && array[prev] < value)
	{
		prev++;

		if (prev == fmin(curr + 1, size))
			return (-1);

		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	if (prev < size && array[prev] == value)
		return (prev);

	return (-1);
}
