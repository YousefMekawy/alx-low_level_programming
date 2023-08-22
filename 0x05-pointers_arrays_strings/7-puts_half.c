#include "main.h"
/**
 * puts_half - a function that prints the sec half
 * of a string
 * @str: an input of string
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
