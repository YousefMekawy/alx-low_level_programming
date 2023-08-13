#include <stdio.h>
/**
 * main - entry point fun for numers 0 to 9
 *
 * Description: finction prints all combainaation numbers 0 to 9
 *
 * Return:0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
