#include "main.h"

/**
 * _puts_recursion - prints string recursively
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
