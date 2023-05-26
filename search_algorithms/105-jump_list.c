#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of int using
 *             the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 *         or NULL if value is not present or if the list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev;
	listint_t *curr;
	size_t i;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	curr = list;
	prev = 0;

	while (curr->index < size && curr->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		prev = curr->index;
		for (i = 0; curr->next && i < jump; i++)
			curr = curr->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr->index);

	printf("Value checked at index [%lu] = [%d]\n", prev, ((listint_t *)prev)->n);
	while (((listint_t *)prev)->next && ((listint_t *)prev)->next->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			((listint_t *)prev)->index, ((listint_t *)prev)->n);
		prev = ((listint_t *)prev)->index;
	}

	if (((listint_t *)prev)->next && ((listint_t *)prev)->next->n == value)
	{
		curr = ((listint_t *)prev)->next;
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		return (curr);
	}
	printf("Value checked at index [%lu] = [%d]\n",
		((listint_t *)prev)->index, ((listint_t *)prev)->n);
	printf("Value checked at index [%lu] = [%d]\n",
		((listint_t *)prev)->next->index, ((listint_t *)prev)->next->n);
	return (NULL);
}
