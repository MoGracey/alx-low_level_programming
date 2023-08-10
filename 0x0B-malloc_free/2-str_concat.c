#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * str_concat - concatenate two strings using the malloc function
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int length1 = 0, length2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[length1])
len1++;
while (s2[length2])
length2++;

concatenated = malloc(sizeof(char) * (length1 + length2 + 1));
if (concatenated == NULL)
return (NULL);

for (i = 0; i < length1; i++)
concatenated[i] = s1[i];
for (j = 0; j < length2; j++)
concatenated[i + j] = s2[j];

concatenated[i + j] = '\0';

return (concatenated);
}
