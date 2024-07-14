#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */
void print_number(int n)
{
unsigned int number = 0;
if (n < 0)
{
number = -n;
_putchar('-');
}
else
{
number = n;
}
if (number / 10)
{
print_number(number / 10);
}
_putchar((number % 10) + '0');
}
