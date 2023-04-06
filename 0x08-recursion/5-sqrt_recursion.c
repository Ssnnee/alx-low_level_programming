#include "main.h"

/**
 * sqrt_helper - computes the natural square root of n recursively
 * @n: the number to compute the square root of
 * @min: the minimum possible square root of n
 * @max: the maximum possible square root of n
 *
 * Return: the natural square root of n, or -1 if n does not have one
 */
int sqrt_helper(int n, int min, int max)
{
	int mid = (min + max) / 2;

	if (min > max)
		return (-1);
	if (mid * mid == n)
		return (mid);
	if (mid * mid > n)
		return (sqrt_helper(n, min, mid - 1));
	return (sqrt_helper(n, mid + 1, max));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1, n));
}
