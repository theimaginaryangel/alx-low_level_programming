#include "main.h"
/**
 * print_alphabet - A function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char alphaBet = 'a';
while (alphaBet <= 'z')
{
_putchar(alphaBet);
alphaBet++;
}
_putchar('\n');
}
