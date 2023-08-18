#include "main.h"

/**
 * _isupper -fun to test if supper
 * @c: char to check the fun
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
