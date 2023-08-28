#include "main.h"
/**
 * _strspn - the function
 * @s: the string
 * @accept:prototype
 * Return:(0)
 */
unsigned int _strspn(char *s, char *accept)
{
	int k = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				k++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
