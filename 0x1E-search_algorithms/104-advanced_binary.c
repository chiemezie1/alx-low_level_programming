#include "search_algos.h"

/**
 * print_array - Prints the current subarray being searched
 * @array: The array to be printed
 * @left: The starting index of the subarray
 * @right: The ending index of the subarray
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
        printf("%d%s", array[i], i < right ? ", " : "\n");
}

/**
 * _advanced_binary - Recursively searches for a value in a sorted array
 * @array: The array to search in
 * @left: The left boundary of the subarray
 * @right: The right boundary of the subarray
 * @value: The value to search for
 * Return: Pointer to the first occurrence of the value, or NULL if not found
 */
int *_advanced_binary(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (left > right)
        return (NULL);

    print_array(array, left, right);

    mid = left + (right - left) / 2;

    if (array[mid] == value)
    {
        if (mid == left || array[mid - 1] != value)
            return (array + mid);
        return (_advanced_binary(array, left, mid, value));
    }
    else if (array[mid] > value)
        return (_advanced_binary(array, left, mid - 1, value));
    else
        return (_advanced_binary(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: The array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    int *result;

    if (array == NULL || size == 0)
        return (-1);

    result = _advanced_binary(array, 0, size - 1, value);

    if (result == NULL)
        return (-1);
    return (result - array);
}
