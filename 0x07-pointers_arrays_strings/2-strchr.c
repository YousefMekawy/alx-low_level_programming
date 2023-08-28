#include "main.h"
/**
 * _strchr - function of str
 * @s: the string
 * @c: the consast point
 * Return: 0 for this fun
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
