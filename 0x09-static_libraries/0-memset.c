#include "main.h"

/**
 * _memset - fills memory with a constant byte b.
 * @s: pointer o the destination object
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (i = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
