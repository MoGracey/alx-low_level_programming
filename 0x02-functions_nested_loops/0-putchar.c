#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * print _putchar
 * Return 0
 */
int main(void)
{
	char alxprint[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(alxprint[i]);
	}

	//_putchar();
	return (0);
}
