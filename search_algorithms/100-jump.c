#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, prev_index, index;

	if (array == NULL || size == 0)
		return (-1);

	jump = (int) sqrt((double) size);
	prev_index = 0;
	index = jump;

	printf("Value checked array[%d] = [%d]\n", prev_index, array[prev_index]);

	while (index < (int) size && array[index] < value)
	{
		prev_index = index;
		index += jump;
		printf("Value checked array[%d] = [%d]\n", prev_index, array[prev_index]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev_index, index);

	if (index >= (int) size || array[prev_index] > value)
		return (-1);

	while (prev_index <= index)
	{
		printf("Value checked array[%d] = [%d]\n", prev_index, array[prev_index]);
		if (array[prev_index] == value)
			return (prev_index);
		prev_index++;
	}

	return (-1);
}
