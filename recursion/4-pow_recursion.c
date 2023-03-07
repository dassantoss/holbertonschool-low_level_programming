/**
 * _pow_recursion - Function that returns the value
 * of x raise to the power of y.
 *
 * @x: Integer X
 * @y: Integer Y
 *
 * Return: Return the value of x raised to the power of y
 * Return -1 when y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
