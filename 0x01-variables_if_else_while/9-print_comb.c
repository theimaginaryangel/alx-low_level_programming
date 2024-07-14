#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: A program that prints all possible combinations
 * of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
int singleDigits;
for (singleDigits = '0'; singleDigits <= '9'; singleDigits++)
{
putchar(singleDigits);
if (singleDigits != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
