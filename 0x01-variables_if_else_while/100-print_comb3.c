#include <stdio.h>

/**
 *  * main - Prints the numbers from 00 to 99, numbers separated by
 *   *        a comma followed by a space, in ascending order.
 *    *
 *     * Return: Always 0.
 */
int main(void)
{
		int num, num2;

		for (num = 0; num <= 9; num++)
		{
			for (num2 = num + 1; num2 <= 9; num2++)
			{
				putchar((num % 10) + '0');
				putchar((num2 % 10) + '0');
				if (num == 8 && num2 == 9)
					continue;
				putchar(',');
				putchar(' ');
																		}
		}

				putchar('\n');

					return (0);
}
