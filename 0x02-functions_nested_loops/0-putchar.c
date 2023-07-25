#include "main.h"

/**
 * main - Entry point
 * print _putchar
 * Return: return 0
 */
int main(void)
{
	char alxprint[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(alxprint[i]);
	}

	_putchar('\n');
	return (0);
}
