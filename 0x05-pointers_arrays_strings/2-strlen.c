#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to check
 * Return: void
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
