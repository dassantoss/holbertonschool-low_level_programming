#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the number, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = size - 1;
	unsigned int pos;

	if (array == NULL || size == 0)
		return (-1);

	while ((array[end] != array[start]))
	{
		pos = start + (((double)(end - start)
				/ (array[end] - array[start]))
			       * (value - array[start]));

		if (pos > size)
		{
			printf("Value checked array[%d] is out of range\n"
			       , pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (value > array[pos])
			start = pos + 1;
		else if (value < array[pos])
			end = pos - 1;
		else
			return (pos);
	}

	if (value == array[start])
		return (start);
	else
		return (-1);
}
