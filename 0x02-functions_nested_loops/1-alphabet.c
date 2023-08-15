#include <stdio.h>
#include "main.h"
/**
 * main - entry point fun prints alphabet
 *
 * Description: a function that prints the alphabet, in lowercase, followed by a new line
 *
 * Return:0 (success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
