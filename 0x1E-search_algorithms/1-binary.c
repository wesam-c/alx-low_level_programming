#include "search_algos.h"

/**
* binary_search - searches for value in sorted array of
*                integers using Binary search algorithm
* @array: pointer to the 1st element in array
* @size: num of elements in array
* @value: to search for
* array is sorted in asc order, value only appear once
* Return: index where value is located
*         value not present, array = NULL => -1
*/

int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid, k;

    if (array == NULL)
    {
        return -1;
    }
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        for (k = low; k <= high; k++)
        {
            if (k == i)
                printf("Searching in array: %d", array[k]);
            else
                printf(", %d", array[k]);
        }
        printf("\n");

        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}