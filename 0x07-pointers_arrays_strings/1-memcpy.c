#include "main.h"

/**
 * _memcpy - copies memroy area
 * @dest: pointer to the destination arrsy
 * @src: pointer to the source of the data to be cipied
 * @n: number of bytes to be copied
 *
 * Return: retrn dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
