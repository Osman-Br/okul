#include <stdio.h>

short maxFind(short number1, short number2,short number3);
int main( void )
{
short number1,number2,number3;
puts("3 tane sayı gönderiver:");
scanf("%hi %hi %hi",&number1,&number2,&number3);
printf("EN buyuk sayı: %hi" ,maxFind(number1,number2,number3));
return 0;
}
short maxFind(short number1,short number2,short number3)
{
short maksimus = number1;
if(maksimus < number2)
{
 maksimus = number2;
}
if(maksimus < number3)
{
 maksimus = number3;
}
return maksimus;
}
