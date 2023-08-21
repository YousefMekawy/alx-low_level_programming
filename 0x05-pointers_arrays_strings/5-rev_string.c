#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: string
 * Return: String blsha3lob
 */
void rev_string(char *s)
{
	char temps = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		count--;
		tmps = s[i];
		s[i] = s[count];
		s[count] = temps;
	}
}
i
