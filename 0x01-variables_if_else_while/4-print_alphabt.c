#include <stdio.h>
/**
 * main - entry point fun for ABC
 *
 * Description: finction prints the alphapit exsept e&q
 *
 * Return:0 (success)
 */
int main(void)
{
	char alpabit[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i <= 23;  i++)
		putchar(alpabit[i]);

	putchar('\n');
	return (0);
}
