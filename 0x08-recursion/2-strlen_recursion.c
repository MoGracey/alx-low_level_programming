#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
		return (0);

	length = 1 +  _strlen_recursion(s + 1);

	return (length);
}
