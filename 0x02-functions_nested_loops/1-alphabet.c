#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase in one function
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
