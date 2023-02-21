#include "main.h"
/**
 * times_table - to check if is letter or not
 * Return: (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int tmp;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tmp = 0;
			tmp = j * i;
			_putchar(tmp + '0');
			_putchar(',');
			_putchar('  ');
			_putchar('  ');
			if (j == 9)
			{
				_putchar('$');
				_putchar('\n');
			}
		}
	}
}
