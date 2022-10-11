#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: the byte
 * @n: # of the byte to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
