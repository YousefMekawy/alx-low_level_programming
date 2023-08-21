#include "main.h"
/**
 * print_rev - a function to rev a string
 * @s: string i want to rev
 * Return: n
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (*s != '\0')
	{
		len++;
		s--;
	}
	s--;
	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		--s;
	}
	_putchar('\n');
}
