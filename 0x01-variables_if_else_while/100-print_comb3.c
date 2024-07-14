#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: A program that prints all possible different
 * combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
int digits = 0;
while (digits < 10)
{
number = 0;
while (number < 10)
{
if (digits != number && digits < number)
{
putchar('0' + digits);
putchar('0' + number);
if (number + digits != 17)
{
putchar(',');
putchar(' ');
}
}
number++;
}
digits++;
}
putchar('\n');
return (0);
}
