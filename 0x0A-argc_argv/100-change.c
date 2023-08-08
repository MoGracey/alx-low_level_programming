#include<stdio.h>
#include "main.h"

/**
 * main - it prints the addition of positive numbers only.
 * @argc: the number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1 if one of the numbers contains symbols that are non-digits
 * Otherwise 0.
 */
int calculate_minimum_coins(int cents)
{
int coins = 0;

while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else
cents -= 1;

coins++;
}

return (coins);
}int main(int argc, char *argv[])
{
int cents, coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

coins = calculate_minimum_coins(cents);
printf("%d\n", coins);

return (0);
}
