#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * this is hard i made some os this code and the others i saw
 * it online
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, h, n, len, f, digit;

	k = 0;
	h = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && f == 0)
	{
		if (s[k] == '-')
			++h;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (h % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			f = 0;
		}
		k++;
	}

	if (f == 0)
		return (0);

	return (n);
}
