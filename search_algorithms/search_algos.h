#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/*searches for a value in an array of integers using the Linear search*/
int linear_search(int *array, size_t size, int value);

/*searches for a value in an array of integers using the Binary search*/
int binary_search(int *array, size_t size, int value);

/*print array*/
void print_array(int *array, size_t start, size_t end);

/*searches for a value in a sorted array of integers using the Jump search*/
int jump_search(int *array, size_t size, int value);

/*searches for a value using the Interpolation search algorithm*/
int interpolation_search(int *array, size_t size, int value);

/*searches for a value in a sorted array of int using the Exponential search*/
int exponential_search(int *array, size_t size, int value);

/*searches for a value in a sorted array of integers using the Binary search*/
int binary_search_exponential(int *array, size_t start, size_t end, int value);

/*Advanced binary search*/
int advanced_binary(int *array, size_t size, int value);

/*recursive function to perform advanced binary search*/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value);

/* Jump search in a singly linked list*/
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif
