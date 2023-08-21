/**
 * add - Adds two integers.
 *
 * @a: The first integer operand.
 * @b: The second integer operand.
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 *
 * @a: The first integer operand.
 * @b: The second integer operand.
 * Return: The difference between the two integers.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul Multiply two integers.
 *
 * @a: The first integer operand.
 * @b: The second integer operand.
 * Return: The product of the two integers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divide two integers.
 *
 * @a: The dividend.
 * @b: The divisor.
 * Return: The result of integer division, or 0 if division by zero is attempted.
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}

/**
 * mod - Calculate the modulo of two integers.
 *
 * @a: The dividend.
 * @b: The divisor.
 * Return: The modulo result, or 0 if division by zero is attempted.
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}

