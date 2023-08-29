#include "main.h"
/**
 * _strcat - the function that limk tow strings togother
 * @dest: the first string
 * @src:  the second string
 *
 * Return: el void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';
	return (dest);
}
