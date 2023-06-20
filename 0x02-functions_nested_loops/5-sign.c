1#include "main.h"
2
3/**
4 * print_sign - Prints the sign of a number
5 * @n: The number to check
6 *
7 * Return: 1 and prints + if n is greater than zero
8 *         0 and prints 0 if n is zero
9 *        -1 and prints - if n is less than zero
10 */
int print_sign(int n)
11{
12    if (n > 0)
13    {
14        _putchar('+');
15        return 1;
16    }
17    else if (n == 0)
18    {
19        _putchar('0');
19        return 0;
20    }
21    else
22    {
23        _putchar('-');
24        return -1;
25    }
26}
27
