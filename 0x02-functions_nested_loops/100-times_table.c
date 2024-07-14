#include "main.h"
/**
 * print_times_table - A function that prints the n times table.
 * @n : input for the n times tables
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int tableColumn = 0;
int timesTable, tableRow;
if (n < 0 || n > 15)
return;
while (tableColumn <= n)
{
for (tableRow = 0; tableRow <= n; tableRow++)
{
timesTable = tableColumn * tableRow;
if (tableRow == 0)
_putchar('0' + timesTable);
else if (timesTable < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + timesTable);
}
else if (timesTable < 100)
{
_putchar(' ');
_putchar('0' + timesTable / 10);
_putchar('0' + timesTable % 10);
}
else
{
_putchar('0' + timesTable / 100);
_putchar('0' + (timesTable - 100) / 10);
_putchar('0' + timesTable % 10);
}
if (tableRow < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
tableColumn++;
}
}
