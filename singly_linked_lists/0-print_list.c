#include "lists.h"

/**
* print_list - Function that prints all elements of a list_t list
* @h: Singly linked lists
* Return: Number of elements of a list
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
