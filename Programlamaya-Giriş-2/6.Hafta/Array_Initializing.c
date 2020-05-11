//A program showing how an array initialized with a list is used
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
 int array [ 10 ] = { 1, 11, 111, 1111, 11111, 2, 22, 222, 2222, 22222 };
 size_t counter;
 for(counter = 0; counter < 10; counter ++ )
 {
  printf( "Index:%u\tElement:%d\n", counter, array[ counter ] );
 }

 return 0;
}
