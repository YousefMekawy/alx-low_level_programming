#include "main.h"
/**
 * print_alphabet_x10 - prints all aphabetfor ten times lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char b;

	for (i = 0; i < 10; i++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}
