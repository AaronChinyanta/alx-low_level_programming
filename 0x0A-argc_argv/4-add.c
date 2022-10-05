#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of the pointers to trings
 *
 * Return: 0 if no errors. else 1
 */

int main(int argc, char *argv[])
{
	int a = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i] [j]; j++)
		{
			if (isdigit (argv[i] [j] == 0))
			{
				puts("Error");

				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}

	printf("%d\n" , a);
	return (0);
}
