#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: A program that prints all possible
 * combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
int digitOne = 0;
int firstDigitOne;
int secondDigitOne;
int digitTwo;
int firstDigitTwo;
int secondDigitTwo;
while (digitOne <= 98)
{
firstDigitOne = (digitOne / 10 + '0');
secondDigitOne = (digitOne % 10 + '0');
digitTwo = 0;
while (digitTwo <= 99)
{
firstDigitTwo = (digitTwo / 10 + '0');
secondDigitTwo = (digitTwo % 10 + '0');
if (digitOne < digitTwo)
{
putchar(firstDigitOne);
putchar(secondDigitOne);
putchar(' ');
putchar(firstDigitTwo);
putchar(secondDigitTwo);
if (digitOne != 98)
{
putchar(',');
putchar(' ');
}
}
digitTwo++;
}
digitOne++;
}
putchar('\n');
return (0);
}
