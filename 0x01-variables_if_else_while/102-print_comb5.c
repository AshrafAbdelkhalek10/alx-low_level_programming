#include <stdio.h>
/**
 * main - Entry programm
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			int a = i / 10;
			int b = i % 10;
			int c = j / 10;
			int d = j % 10;

			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(d + '0');
			if (i < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	/*putchar('\n');*/
	return (0);
}
