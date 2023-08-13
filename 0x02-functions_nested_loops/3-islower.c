#include "main.h"

/**
 * _islower - expecting 1 if the letter is lowercase and 0 if not.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
