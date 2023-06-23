#include "3-calc.h"

/**
 * op_add - addition operator
 * @a: integer operand
 * @b: integer operand
 *
 * Return: (0)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: integer operand
 * @b: integer operand
 *
 * Return (0)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: integer operand
 * @b: integer operand
 *
 * Return (0)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: integer operand
 * @b: integer operand
 *
 * Return (0)
 */

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
