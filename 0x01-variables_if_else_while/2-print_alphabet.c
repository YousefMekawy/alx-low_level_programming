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
	char alphbit[26]="abcdefghijklmnopqrstuvwxyz"; 
	int i;
	for(i=0;i <= 25;i++)
	{
		putchar(alphbit[i]);
	}
	putchar('\n');
	return (0);
	
}
