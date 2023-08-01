#include "main.h"

/**
 * _strpbrk - searches a string for set of bytes
 * @s: string to be checked
 * @: characters to match
 *
 * Return: return a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int y,i;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[y] == accept[i])
			{
				break;
			}
		}
		if (accept[i] != '\0')
		{
			return (s[y]);
		}
	}
	return (0);
}
