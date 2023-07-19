/**
 * print_last_digit - prints the last digit of an int
 * @m: the int to be checked
 * Returns: value of the last digit
 */
int print_last_digit(int m)
{
	int a;

	if (m < 0)
	m = -m;

	a = m % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
