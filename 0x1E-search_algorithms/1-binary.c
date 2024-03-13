#include "search_algos.h"


/**
 * print_array - function that print array
 * @array: pointer to the first elm of array
 * @L: the lowest value;
 * @R: the highest value
 */
void print_array(int *array, size_t L, size_t R)
{
	size_t i;

	for (i = L; i <= R; i++)
	{
		if (i != R)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
/**
 * binary_search - perfomrs a binary search on array
 * @array: sorted array to search through
 * @size: of array
 * @value: we are searching for
 *
 * Return: index where value is || -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int mid = 0;
	int left = i;
	int right = size - 1;

	if (!value || array == NULL)
		return (-1);
	while (left < right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		print_array(array, left, right);
		/*printf("Mid is -> %d\n", mid);*/
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return (-1);

}
