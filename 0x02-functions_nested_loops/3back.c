#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Start of Script
 * Description:runs main from main.h
 * Return: Always 0 (Success)
 */
int _islower(char d)
{
char g;
g = 'r';
if (islower(d) == 0)
printf("P%c %cP\n", d, g);
if(d == 'H')
{
printf("x%cx \n", d);
return (0);
}else
  return (1);
}
