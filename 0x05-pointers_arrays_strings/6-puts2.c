#include "main.h"
/**
 * puts2 - function should print only one character of 2
 * @str: string
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int tmp = 0;
	char *s = str;
	int o;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	tmp = len - 1;
	for (o = 0 ; o <= tmp ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
