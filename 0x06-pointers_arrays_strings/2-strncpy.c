#include "main.h"
/**
 * _strncpy - copys two strings
 * @dest: frist string
 * @src: frsit string
 * @n: the value of dhk
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
