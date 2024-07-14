#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet in lowercase & uppercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphaBet = 'a';
while (alphaBet <= 'z')
{
putchar(alphaBet);
alphaBet++;
}
alphaBet = 'A';
while (alphaBet <= 'Z')
{
putchar(alphaBet);
alphaBet++;
}
putchar('\n');
return (0);
}
