#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base.
 * @y: exponent.
 *
 * Return: value of the exponentiation, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);
    else if (y == 0)
        return (1);
    else if (y % 2 == 0)
        return _pow_recursion(x * x, y / 2);
    else
        return x * _pow_recursion(x, y - 1);
}
