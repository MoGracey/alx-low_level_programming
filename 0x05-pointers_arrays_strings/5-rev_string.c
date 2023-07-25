#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	char *holder;

	*holder	= *s;

	int j, k;

	k = 0;

	for (j = i; j <= 0; j--)
	{
		s[k] = holder[j];
		k++;
	}
}
