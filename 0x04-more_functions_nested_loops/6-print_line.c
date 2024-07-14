#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of times the char("_") is printed.
 * Return: Always 0.
 */
void print_line(int n)
{
int i = 0;
while (i < n && n > 0)
{
_putchar('_');
i++;
}
_putchar('\n');
}
