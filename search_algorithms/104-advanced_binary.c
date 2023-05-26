#include "search_algos.h"

/**
 * advanced_binary_recursive - recursive function to perform
 * advanced binary search
 * @array: pointer to the first element of the array
 * @left: index of the leftmost element of the subarray
 * @right: index of the rightmost element of the subarray
 * @value: value to search for
 *
 * Return: index of the first occurrence of value in the array,
 * or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (mid = left; mid < right; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = (left + right) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] < value)
			return (mid);
		else
			return (advanced_binary_recursive(array, left, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, right, value));
	else
		return (advanced_binary_recursive(array, left, mid, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 *                   the advanced binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the first occurrence of value in the array,
 * or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
