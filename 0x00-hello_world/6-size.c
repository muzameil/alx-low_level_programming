#include <stdio.h>
/**
*main - print the string in the put function
*
*Description: using the main function
*return: 0
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

printf("size of a char:%ld bytes(s)\n", sizeof(c));
printf("size of a an int:%ld byte(s)\n", sizeof(i));
printf("size of a long int:%ld byte(s)\n", sizeof(li));
printf("size of a long long int:%ld byte(s)\n", sizeof(lli));
printf("size of a float :%ld byte(s)\n", sizeof(f));
return(0);
}
