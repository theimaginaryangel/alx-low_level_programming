#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number.
 * @result : the result of the number's last digit
 * Return: Always 0 (Success)
 */

int print_last_digit(int result)
{
int lastDigit;
lastDigit = result % 10;
if (lastDigit < 0)
{
lastDigit = (lastDigit * -1);
}
_putchar(lastDigit + '0');
return (lastDigit);
}
