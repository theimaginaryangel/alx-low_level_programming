#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase++;
}
putchar('\n');
return (0);
}
