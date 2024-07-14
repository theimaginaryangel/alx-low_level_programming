#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet in lowercase.
 * Except 'q' and 'e'.
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase != 'e' && lowerCase != 'q')
{
putchar(lowerCase);
}
lowerCase++;
}
putchar('\n');
return (0);
}
