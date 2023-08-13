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
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
		putchar(alphabet[i]);

	putchar('\n');
	return (0);
}
