#include <unistd.h>

/**
 * _putchar - writes the char c in std
 * @c: the char print
 * Return: on success 1 else -1
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
