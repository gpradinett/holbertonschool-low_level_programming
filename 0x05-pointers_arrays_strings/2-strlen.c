#include "main.h"
/**
 * _strlen - Return the lenth of a string
 * @s: String
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
