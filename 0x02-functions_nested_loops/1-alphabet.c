#include <stdio.h>
/**
 * main - Entry point
 * print_alphabet - function to print Alphabet
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;

	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
