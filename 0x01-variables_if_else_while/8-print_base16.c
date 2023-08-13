#include <stdio.h>
/**
 * main - entry point fun for ABC
 *
 * Description: finction prints th alphapit
 *
 * Return:0 (success)
 */
int main(void)
{
	char hex[17] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
		putchar(hex[i]);
	putchar('\n');
	return (0);
}
