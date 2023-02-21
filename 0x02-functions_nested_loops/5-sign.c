#include "main.h"
/**
 * print_sign - to check if is letter or not
 * @n: The parameter to be checked
 * Return: 1,0,-1 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
