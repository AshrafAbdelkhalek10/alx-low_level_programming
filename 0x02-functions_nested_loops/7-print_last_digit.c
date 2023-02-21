#include "main.h"
/**
 *print_last_digit - to print the last digit
 *@a: The parameter to be checked
 * Return: 1,0 (Success)
 */
int print_last_digit(int a)
{
	int rem;

	rem = a % 10;
	if (rem < 0)
		rem *= -1;
	_putchar(rem + '0');
	return (rem);
}
