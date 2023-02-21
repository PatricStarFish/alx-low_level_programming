#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description:printf funt
 * Return: Always 0 (Success)
 */
int print_alphabet()
{
int c;
c = 97;
while (c < 122)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
