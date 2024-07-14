#include "main.h"
/**
 * times_table - A function that prints the 9 times table.
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int tableRow;
int tableColumn;
int timesTable;
for (tableRow = 0; tableRow <= 9; tableRow++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (tableColumn = 1; tableColumn <= 9; tableColumn++)
{
timesTable = (tableRow * tableColumn);
if ((timesTable / 10) > 0)
{
_putchar((timesTable / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((timesTable % 10) + '0');
if (tableColumn < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
