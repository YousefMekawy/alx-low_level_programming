#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;
//to make sure the number is positve 
	a = n % 10;

	if (a < 0)
		a = -a;
//to return the negitive
	_putchar(a + '0');

	return (a);
}
