#include "main.h"
/*#include "_putchar.c"*/
/**
 * main - Start of Script
 * Description:runs main from main.h
 * Return: Always 0 (Success)
 */
int main ()
{
  print_alphabet();
  return (0);
}
int print_alphabet(void)
{
int c;
c = 97;
while (c < 123)
{
_putchar(c);
c++;
}
_putchar('\n');
return (0);
}
