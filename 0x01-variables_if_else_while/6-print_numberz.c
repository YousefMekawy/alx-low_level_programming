#include <stdio.h>
/**
 * main - entry point fun for num
 *
 * Description: finction prints the numbers form 0 to 9 only putchar
 *
 * Return:0 (success)
 */
int main(void)
{
	char num = '0';

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
