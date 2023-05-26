#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of int using
 *             the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the node where value is located,
 *         or NULL if value is not present or if the list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = 0;
	listint_t *prev = NULL;
	listint_t *curr = NULL;
	size_t i;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	curr = list;

	for (i = 0; curr->next && i < jump; i++)
		curr = curr->next;

	while (curr->index < size && curr->n < value)
	{
		prev = curr;
		for (i = 0; curr->next && i < jump; i++)
			curr = curr->next;

		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, curr->index);

	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	while (prev->index < size && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	if (prev != NULL && prev->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		return (prev);
	}

	return (NULL);
}
