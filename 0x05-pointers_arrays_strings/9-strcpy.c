#include "main.h"

/**
 * _strcpy - prototype
 * @dest: pointer
 * @src: pointer
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, a;

	for (i = 0; src[i] != '\0'; i++)
	{}

	for (a = 0; a < i; a++)
	{
	dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
