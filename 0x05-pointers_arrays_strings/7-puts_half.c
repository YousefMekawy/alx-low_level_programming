#include "main.h"
/**
 * puts_half - a function that prints the sec half
 * of a string
 * @str: an input of string
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (i = (len / 2); i >= (len - 1); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
