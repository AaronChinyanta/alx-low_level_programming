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

	char *string2 = _strstr(string1, 'needle');

	if (string2 != NULL)
	{
		printf("%s\n", string2);
	}
	return (0);
}
