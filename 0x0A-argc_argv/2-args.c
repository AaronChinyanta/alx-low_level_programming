#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/

	int count = 0;

	if (argc > 0)
	{
		/*While - Print each arguments*/

		while (count < argc)

		{
			printf("%s\n", argv[count]);
		}
	}
}
