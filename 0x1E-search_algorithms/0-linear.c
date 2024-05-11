#include "search_algos.h"

/**
* linear_search - searches for value in array of integers
* 			using the Linear search algorithm
* @array: pointer to the 1st element in array
* @size: num of elements in array
* @value: to search for
* Return: 1st index where value is located
* 		value not present, array = NULL => -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return -1;
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
	}

	return -1;
}
