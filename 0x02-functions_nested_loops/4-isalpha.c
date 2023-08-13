#include "main.h"

/**
 * _isalpha - Check if character entered is an alphabetic.
 * @c: type int character
 * Return: 1 if the character is lowercase or uppercase, and 0 if otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
