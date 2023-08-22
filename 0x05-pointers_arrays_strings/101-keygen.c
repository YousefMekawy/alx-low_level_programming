#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * passwords random
 * Return: Always 0 (Success)
 */
int main(void)
{
	int range[100];
	int i, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		range[i] = rand() % 78;
		sum += (range[i] + '0');
		putchar(range[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
