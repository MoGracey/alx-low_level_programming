#include "main.h"

/**
 * _isdigit - Check for int value
 * from 0 to 9
 * @c: the int var to be checked
 * Return: 1 if true for digit, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
