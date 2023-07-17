#include <stdio.h>

/**
 * *main - Prints all single digits on a new line.
 * *
 * *Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
	}
	putchar('\n');
	return (0);
}
