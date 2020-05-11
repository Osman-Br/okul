#include <stdio.h>

union number{
int x;
double y;
}; // end union number

int main( void )
{
	union number value;
	value.x = 100;
    printf("int:%d\tdouble:%f\n", value.x, value.y );
    value.y = 100.0; 
    printf("int:%d\tdouble:%f\n", value.x, value.y );
    return 0;
}
