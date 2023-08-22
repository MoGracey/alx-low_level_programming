#include <stdlib.h>
#include "main.h"
/**
  * _calloc - the program allocates memory to an array using the malloc function.
  * @nmemb: the number represented as n of elements in the array.
  * @size: size of elements of array.
  *
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned char *p;
unsigned int i;
unsigned int total_size;


if (nmemb == 0 || size == 0)
return (NULL);


total_size = nmemb * size;

ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

p = ptr;
for (i = 0; i < total_size; i++)
p[i] = 0;

return (ptr);
}
