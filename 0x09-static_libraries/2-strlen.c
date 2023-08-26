#include "main.h"

/**
 * _strlen - checks for the length of string
 * @s: parameter to be checked
 *
 * Return: return length
 */

int _strlen(char *s)
{
	int i, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
