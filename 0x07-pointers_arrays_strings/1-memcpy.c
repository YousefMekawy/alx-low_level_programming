#include "main.h"
/**
 *_memcpy - a function that copies a str
 * @dest: the string
 * @src: what we are coping
 * @n: how many char we r coping
 * Return: the pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
