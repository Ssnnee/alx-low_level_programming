#include "main.h"
/**
 * is_prime_helper - recursively checks if a number is prime
 * @n: the number to check
 * @d: the current divisor to try
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int d)
{
	if (n <= 1)
		return (0);
	if (d * d > n)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime_helper(n, d + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
