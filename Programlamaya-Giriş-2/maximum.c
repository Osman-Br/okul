#include <stdio.h>

int main(void)
{
 int number = 1;
 int maximum = 0;
 int counter = 1;

 while( counter <= 10 )
 {
  printf("Enter number %d:", counter);
  scanf("%d", &number);
  if( number < 0 )
  {
   printf("You must enter a positive number.\n");
  }
  else
  {
   counter = counter + 1;
   if(maximum < number)
   {
    maximum = number;
   }
  }
 }
 printf( "maximum number is %d" , maximum );
 return 0;
}
