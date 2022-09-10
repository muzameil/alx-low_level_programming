#include <stdlib.h>
#include <time.h>
#include<stdio.h>
"files.trimTrailingWhitespace": true
/**
*main Entry-point
*
* return 0 if suceess
*/
/*Main function*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
else 
{
printf("%i is negative\n", n);
}
/*Returns if true:*/
return (0);
}
