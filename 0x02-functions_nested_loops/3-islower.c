#include "main.h"
/**
 * _islower - to check if is lower or not
 * 'c': The parameter to be checked
 *
 * Return: 1,0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
