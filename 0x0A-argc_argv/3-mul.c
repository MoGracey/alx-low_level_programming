#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiply two numbers
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
int no1, no2, result;
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
no1 = atoi(argv[1]);
no2 = atoi(argv[2]);
result = no1 *no2;

printf("%d\n", result);

return (0);
}
