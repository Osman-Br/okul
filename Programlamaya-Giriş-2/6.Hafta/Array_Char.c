//A program showing how a character array is used
#include <stdio.h>
#include <stdlib.h>

//define �n-i�lemci direktifi de�eri 21 olan SIZEOFARRAY isimli bir sabit tan�mlar.
#define SIZEOFARRAY 21

int main( void )
{
 char charArray [ SIZEOFARRAY ] = { '\0' };

 
 printf( "Enter a word(no longer than 20 characters):" );
 scanf( "%s", charArray );
 //charArray de�i�keni dizinin ilk eleman�n�n adresini i�erdi�i i�in & operat�r� kullan�lmam��t�r.
 
 printf( "Your word is:" );
 size_t counter;
 for( counter = 0; counter < SIZEOFARRAY; counter ++ )
 {
  if( charArray[ counter ] != '\0' )
  {
   printf( "%c", charArray[ counter ] );
  }
 }
 printf( "\n" );


 return 0;
}
