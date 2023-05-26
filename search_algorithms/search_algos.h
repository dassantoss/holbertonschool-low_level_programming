#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*searches for a value in an array of integers using the Linear search*/
int linear_search(int *array, size_t size, int value);

/*searches for a value in an array of integers using the Binary search*/
int binary_search(int *array, size_t size, int value);

/*print array*/
void print_array(int *array, size_t start, size_t end);

/*searches for a value in a sorted array of integers using the Jump search*/
int jump_search(int *array, size_t size, int value);

#endif
