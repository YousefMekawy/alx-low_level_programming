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
	char hex[16] = "0123456789abcde";
	int i;

	for (i = 0; i < 15; i++)
		putchar(hex[i]);
	putchar('\n');
	return (0);
}
