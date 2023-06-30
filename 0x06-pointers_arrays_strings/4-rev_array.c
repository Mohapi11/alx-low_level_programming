#include "main.c"

/**
 * reverse_array - Reverse the content of an array og integers.
 * @a: The array og integers to be reversed.
 * @n: The number of elements in the array.
 *
 */

void reverse_array(int *a, int n)

{

	int tmp, index;

	for (index = n - 1; index >= / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
