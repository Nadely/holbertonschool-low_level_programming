#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* more headers goes there
* betty style doc for function main goes there
* 
* Return: Description of the returned value
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf("n is positive");
if (n == 0)
printf("n is zero");
if (n > 0)
printf("n is negative");
return (0);
}
