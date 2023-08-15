#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Description: fun for all possible combinations of three digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 1; digit2 <= 9; digit2++)
		{
			for (digit3 = 2; digit3 <= 9; digit3++)
			{
				if (digit3 > digit2 && digit2 > digit1)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);
				putchar(digit3 + 48);
				if (digit1 != 7 || digit2 != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
