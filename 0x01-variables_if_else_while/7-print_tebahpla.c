#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: A program that prints lowercase alphabet in reverse.
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowerCase;
for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
{
putchar(lowerCase);
}
putchar('\n');
return (0);
}
