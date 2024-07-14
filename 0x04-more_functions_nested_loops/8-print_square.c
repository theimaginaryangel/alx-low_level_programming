#include "main.h"
/**
 * print_square - a function that prints a square.
 * @size: the size of the square.
 * Return: Always 0.
 */
void print_square(int size)
{
int height, width;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (height = 1; height <= size; height++)
{
_putchar('#');
for (width = 2; width <= size; width++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
