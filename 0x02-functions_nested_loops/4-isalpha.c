#include "main.h"
/**
 * _isalpha - to check if is letter or not
 * @c: The parameter to be checked
 * Return: 1,0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
