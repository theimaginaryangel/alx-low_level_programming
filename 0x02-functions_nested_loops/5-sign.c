#include "main.h"
/**
 * print_sign - A function that prints the sign of a number.
 * @n : number to check
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
int signOfNumber;
if (n > 0)
{
signOfNumber = 1;
_putchar('+');
}
else if (n == 0)
{
signOfNumber = 0;
_putchar('0');
}
else
{
signOfNumber = -1;
_putchar('-');
}
return (signOfNumber);
}
