#include "main.h"
#include <stdio.h>

/**
 * write a function that that searches
 * a string for any of a set of bytes
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *string1 = "needle in a haystack";

	char 'string2 = "haystack";

	char *result;

	result = strstr(string1, string2);

	if (result == string1)
	{
		return (string2);
	}
	if (result != string1)
	{
		return (NULL);
	}
}

