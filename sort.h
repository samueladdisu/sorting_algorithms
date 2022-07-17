#ifndef sort_h
#define sort_h

#include <stddef.h>

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int quick_sort2(int *array, size_t left, size_t right);
int partition(int *array, int pivot, size_t left, size_t right);
void swap(int *array, size_t firstIndex, size_t secondIndex);

#endif
