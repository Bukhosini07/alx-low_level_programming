#include <unistd.h>

/**
 * _putchar - writes the character c stdout
 * @c: char to be printed
 * Return: 1 on success else -1
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
