#include "main.h"
/**
 * _islower - check if char is lowercase
 *
 * @c: is the char to be checked
 *
 * Return: 1 if char is lowercase, otherwise 0.
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		_putchar (c + 0);
	else if (c >= 65 && c <= 90)
		_putchar (c + 32);
}
