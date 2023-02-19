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
c = 97;
while (c < 123)
{
putchar(c);
c++;
}
c = 65;
while (c < 91)
{
putchar(c);
c++;
}

putchar('\n');
return (0);
}
