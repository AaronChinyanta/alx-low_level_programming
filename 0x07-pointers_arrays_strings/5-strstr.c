#include "main.h"
#include <stdio.h>

/**
 * write a function that that searches
 * a string for any of a set of bytes
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *s = haystack, needle;

	char *f = needle;

	char *c;

	c = _strstr(s, f);

	if (c != f)
	{
		return (NULL);
	}
	if (c == f)
	{
		return (s);
	}
	return (0);
}
