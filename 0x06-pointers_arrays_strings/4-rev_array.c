#include "main.h"
/**
 * reverse_array - reverse any arrry of integrs
 * @a: array 1
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
