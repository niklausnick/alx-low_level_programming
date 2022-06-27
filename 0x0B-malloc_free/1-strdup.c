#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to the new duped string
 */

char *_strdup(char *str)
{
	char *dup;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dup = malloc(i * sizeof(*a) + 1);
	if (dup == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		dup[c] = str[c];
	dup[c] = '\0';

	return (dup);
}
