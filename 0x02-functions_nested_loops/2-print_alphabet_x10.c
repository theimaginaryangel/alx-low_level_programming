#include "main.h"
/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char alphaBet;
int i = 0;
while (i < 10)
{
alphaBet = 'a';
while (alphaBet <= 'z')
{
_putchar(alphaBet);
alphaBet++;
}
_putchar('\n');
i++;
}
}
