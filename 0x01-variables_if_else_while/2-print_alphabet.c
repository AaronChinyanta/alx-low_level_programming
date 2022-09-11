#include <stdio.h>
#include <stdlib.h>
#include <stdtime.h>
/**
 * main - entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= '2'; low++)
		putchar(low);
	printf("\n");

	return (0);
}
