
#include <stdio.h>

int main( void )
{
 short character;
 int A = 0;
 int B = 0;
 int C = 0;
 
 printf("Enter A,B or C: ");
 
 while( (character = getchar() ) != EOF)
 {
  switch(character)
  {
   case 'A':
    A = A+1;
    printf( "Enter A,B or C: " );
    break;
   case 'B':
    B = B + 1;
    printf( "Enter A,B or C: " );
    break;
   case 'C':
    C = C + 1;
    printf( "Enter A,B or C: " );
    break;
   case '\n':
    break;
   case '\t':
    break;
   case ' ':
    break;
   default:
    printf( "You must enter A,B or C: " );
    printf( "Enter A,B or C: " );
    break; 
  }
 }
  if(A == 0)
  {
   printf("\nAcharacter is not entered\n");
  }
  else
  {
   printf("\nA character %d times entered\n",A);
  }
  if(B == 0)
  {
   printf("\nAcharacter is not entered\n");
  }
  else
  {
   printf("\nB character %d times entered\n",B);
  }
  if(C == 0)
  {
   printf("\nCcharacter is not entered\n");
  }
  else
  {
   printf("\nC character %d times entered\n",C);
  }

.









 return 0;
}
