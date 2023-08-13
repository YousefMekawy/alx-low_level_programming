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
	char alpabit[52] = "abcdefghijklmnpqrstuvwxyzABCDEFGHIJKLMNPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 51;  i++)
		putchar(alpabit[i]);

	putchar('\n');
	return (0);
}
