/**
 * factorial - it calculate the factorial of number
 * @n: the argument to be calculated
 * Return: return the factorial result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
			
