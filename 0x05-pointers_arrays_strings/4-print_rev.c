#include "main.h"
/**
 * print_rev - a function to rev a string
 * @s: string i want to rev
 * Return: n
 */
void print_rev(char *s)
{
	int i, temp, len;

	len = _strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp[i] = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
