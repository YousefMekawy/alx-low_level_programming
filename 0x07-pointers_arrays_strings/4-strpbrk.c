#include "main.h"
/**
 * _strpbrk - the function
 * @s: the string
 * @accept: teh chartater
 * Return: (0)
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
