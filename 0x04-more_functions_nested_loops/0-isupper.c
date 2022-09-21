#include "main.h"

/**
 * _ispper - function that checks for uppercase characters.
 * @c: input value to check
 * Return: int.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
		return (0);
}
