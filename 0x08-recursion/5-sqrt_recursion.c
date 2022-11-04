#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a new number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 * Return: the resulting square root
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
