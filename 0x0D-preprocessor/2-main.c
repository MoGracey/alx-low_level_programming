#include <stdio.h>

/**
 * prints - the name of the file it was compiled from
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	printf("%s\n", __THEFILE__);
	return (0);
}
