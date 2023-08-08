#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_positive_number - Check if a string is a positive number
 * @str: String to check
 *
 * Return: 1 if positive number, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int no, digit, sum = 0;

	for (no = 1; no < argc; no++)
	{
		for (digit = 0; argv[no][digit]; digit++)
		{
			if (argv[no][digit] < '0' || argv[no][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[no]);
	}

	printf("%d\n", sum);

	return (0);
}
