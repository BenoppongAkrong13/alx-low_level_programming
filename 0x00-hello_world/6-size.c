#include <stdio.h>
/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
      char acharacter;
      int ainteger;
      long along;
      long long along long;
      float aflot;
printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));
printf("Size of a long int: %lu byte(s)\n", sizeof(along));
printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
return (0);
}
