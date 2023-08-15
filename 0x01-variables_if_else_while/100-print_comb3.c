#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Description: fun for all possible combinations of two digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 8; digit1++)
	{
		for (digit2 = 1; digit2 <= 9; digit2++)
		{
			if (digit2 > digit1)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);
				if (digit1 != 8 || digit2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

