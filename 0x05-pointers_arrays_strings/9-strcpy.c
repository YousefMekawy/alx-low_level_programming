#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: the po
 * @src: the fe
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (x = 0; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
