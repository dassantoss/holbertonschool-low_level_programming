#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                         using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
			return (array[low] == value ? (int)low : -1);

		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		(value < array[pos]) ? (high = pos - 1) : (low = pos + 1);
	}

	printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
