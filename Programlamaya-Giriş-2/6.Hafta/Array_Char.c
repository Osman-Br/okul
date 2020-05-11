//A program showing how a character array is used
#include <stdio.h>
#include <stdlib.h>

//define ön-iþlemci direktifi deðeri 21 olan SIZEOFARRAY isimli bir sabit tanýmlar.
#define SIZEOFARRAY 21

int main( void )
{
 char charArray [ SIZEOFARRAY ] = { '\0' };

 
 printf( "Enter a word(no longer than 20 characters):" );
 scanf( "%s", charArray );
 //charArray deðiþkeni dizinin ilk elemanýnýn adresini içerdiði için & operatörü kullanýlmamýþtýr.
 
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
