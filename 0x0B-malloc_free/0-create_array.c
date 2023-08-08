#include<stdlib.h>
#include "main.h"

/**
 * *create_array - the function creates an array of characters,
 * which is initializes it self initialized
 * @size: the array size to be created
 * @c: char to initialize the array c
 * Return: it returns a pointer to the array on Success, and NULL if Error
 */
char *create_array(unsigned int size, char c)
{
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

{
unsigned int i;
for (i = 0; i < size; i++)
array[i] = c;
}

return (array);
}
