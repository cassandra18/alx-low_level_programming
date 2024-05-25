#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

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


skiplist_t *linear_skip(skiplist_t *list, int value);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
/*void print_list(const listint_t *list)*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
/*void print_array(int *array, size_t left, size_t right);*/
int exponential_search(int *array, size_t size, int value);
int binary_search_2(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, size_t left, size_t right, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);


#endif /* SEARCH_ALGOS_H */ 
