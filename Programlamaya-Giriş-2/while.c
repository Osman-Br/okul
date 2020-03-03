#include <stdio.h>

int main(void)
{
 int number =1;
 int total = 0;
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
   total = total + number;
  }
 }
 printf("Total of numbers is %f",(float)total/(counter - 1));

 return 0;
}
