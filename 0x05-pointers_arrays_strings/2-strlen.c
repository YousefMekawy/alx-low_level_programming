#include "main.h"
/**
 * _strlen - aa function to return a len of str
 * @s: strng
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
