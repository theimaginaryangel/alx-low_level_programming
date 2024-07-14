#include "main.h"
/**
 * print_triangle - a function that prints a triangle.
 * @size: the size of the triangle.
 * Return: Always 0.
 */
void print_triangle(int size)
{
int tp, lp, rp;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (tp = 0; tp <= (size - 1); tp++)
{
for (lp = 0; lp < (size - 1) - tp; lp++)
{
_putchar(' ');
}
for (rp = 0; rp <= tp; rp++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
