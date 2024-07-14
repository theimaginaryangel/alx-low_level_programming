#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: A program that prints all possible different
 * combinations of three digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstDigit;
int secondDigit;
int thirdDigit = 0;
while (thirdDigit < 10)
{
secondDigit = 0;
while (secondDigit < 10)
{
firstDigit = 0;
while (firstDigit < 10)
{
if (firstDigit != secondDigit && secondDigit != thirdDigit &&
thirdDigit < secondDigit && secondDigit < firstDigit)
{
putchar('0' + thirdDigit);
putchar('0' + secondDigit);
putchar('0' + firstDigit);
if (firstDigit + secondDigit + thirdDigit != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
firstDigit++;
}
secondDigit++;
}
thirdDigit++;
}
putchar('\n');
return (0);
}
