#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int multiplesofThree = 0;
int sum = 0;
while (multiplesofThree < 1024)
{
if (multiplesofThree % 3 == 0 || multiplesofThree % 5 == 0)
{
sum += multiplesofThree;
}
multiplesofThree++;
}
printf("%i\n", sum);
return (0);
}
