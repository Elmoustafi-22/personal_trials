#include "main.h"

/**
 * _isupper - checks if upper or lower
 * @c: the character
 * Return: success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
