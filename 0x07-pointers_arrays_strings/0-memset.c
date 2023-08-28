#include "main.h"

/**
 * *_memset - a finction that sets a diffrent value
 * in a string
 * @s: the string that r given
 * @b: the char that the user want to be replaced with
 * @n: how many char that the user wantto change
 * Return: pointer(s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (k = 0 ; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
