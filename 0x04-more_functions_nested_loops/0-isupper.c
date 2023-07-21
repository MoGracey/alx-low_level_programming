#include "main.h"

/**
 * _isupper - the function checks for
 * uppercase characters
 * @c: the var to be checked
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
