#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description:printf funt
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
c = 48;
while (c < 58)
{
putchar(c);
if (c < 57)
{
putchar(44);
putchar(32);
}
c++;
}
putchar('\n');
return (0);
}
