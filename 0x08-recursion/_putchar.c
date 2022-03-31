#include <unistd.h>

/**
 * _putchar - writes the character c to dtdout
 * @c: char to print
 *
 * Return: On success 1.
 * else -1 and errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
