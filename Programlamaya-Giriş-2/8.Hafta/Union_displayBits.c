// Displaying an unsigned int in bits
#include <stdio.h>

void displayBits( unsigned int value );

int main( void )
{
	unsigned int x;
	printf( "%s", "Enter a nongenative int:" );
    scanf( "%u", &x );
    displayBits( x );
    return 0;
} // end main

void displayBits( unsigned int value)
{
	unsigned int c;
    unsigned int displayMask = 2 << 30;
    printf( "%10u = ", value );
    for( c = 1; c <= 32; c++ ){
	  putchar( value & displayMask ? '1' : '0' ); value <<= 1; //Onemileialk
	  if( c % 8 == 0 ){
        putchar( ' ' );
      }
    }
    putchar('\n');
}

