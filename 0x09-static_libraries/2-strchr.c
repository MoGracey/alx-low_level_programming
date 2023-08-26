#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: String to be checked
 * @c: char to be located
 *
 * Return: return the string
 */

char *_strchr(char *s, char c)
{
	int j;

	for(j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s);
		}
	}
	return (0);
}
