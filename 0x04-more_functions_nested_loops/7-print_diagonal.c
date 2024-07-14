#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: number of times the char("\") is printed.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i = 0, c;
while (i < n && n > 0)
{
c = 0;
while (c < i)
{
_putchar(' ');
c++;
}
_putchar('\\');
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
