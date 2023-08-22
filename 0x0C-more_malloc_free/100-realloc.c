#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: The size of the allocated space for ptr.
 * @new_size: The new size of the memory block.
 *
 * Return: Pointer to the reallocated memory block (Success),
 *         or NULL if new_size is zero and ptr is not NULL,
 *         or NULL if malloc fails (Failure).
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

if (new_size == old_size)
return (ptr);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

if (new_size > old_size)
memcpy(new_ptr, ptr, old_size);
else
memcpy(new_ptr, ptr, new_size);

free(ptr);

return (new_ptr);
}
