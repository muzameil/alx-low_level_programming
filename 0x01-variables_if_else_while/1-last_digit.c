#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Succes)
*/

int main(void)
{
int n;
srand(time(0));
n= rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
}
else if (n % 10 == 0)
{
printf("Last digit of %i is %i and is 0\n", n, n % 10);
}
else 
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
}
/* your code goes there */
return (0);
}
