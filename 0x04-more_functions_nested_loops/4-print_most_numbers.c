#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
char num = 0;
while (num <= 9)
{
if (num != 2 && num != 4)
{
_putchar('0' + num);
}
num++;
}
_putchar('\n');
}
