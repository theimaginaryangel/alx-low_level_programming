#include "mainn.h"

/**
 * main - prints "putchar"
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
        char *text = "_putchar\n";
        int textLen = 10;
        int i = 0;

        for (; i < textLen; i++)
        {
                _putchar(text[i]);
        }
        return (0);
