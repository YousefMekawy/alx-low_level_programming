#include "main.h"
/**
 * swap_int - a function that swaps two ingers
 * @a: the first integer to swap with
 * @b: the secound integer to swap with
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
