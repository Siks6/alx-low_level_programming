#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %lubytes(s)\n", sizeof(c));
	printf("Size of an int: %lubytes(s)\n", sizeof(i));
	printf("Size of a long int: %lubytes(s)\n", sizeof(li));
	printf("Size of a long long int: %lubytes(s)\n", sizeof(lli));
	printf("Size of a float: %lu bytes(s)\n", sizeof(f));
	return (0);
}

