#include "main.h"
#include "_putchar.c"
/**
 * print_alphabet - Start of Script
 * Description:runs main from main.h
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
int c;
c = 97;
while (c < 123)
{
_putchar(c);
c++;
}
_putchar(8);
_putchar(110);
return (0);
}
