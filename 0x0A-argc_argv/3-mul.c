#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguments
 * @argv: variable that contains arg
 * Return: value 0
 */
int main(int argc, char *argv[])
{
	int multiple;

	if (argc == 3)
	{
		multiple = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiple);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
