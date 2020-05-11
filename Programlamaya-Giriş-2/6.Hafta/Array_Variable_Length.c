// Using variable-length arrays in C99
#include <stdio.h>

void printArray( int row, int col, int arr[ row ][ col ]); // function prototype

int main( void ){
	int row, col;
	printf( "%s", "Enter number of rows and columns: " );
    scanf( "%d%d", &row, &col ); 
    int array [ row ][ col ];
    int i;
    for( i = 0; i < row; i ++ ){
    	int j;
    	for( j = 0; j < col; j ++ ){
    		array[ i ][ j ] = i * j;
    	}
    }
    printArray(row,col,array);
    
    return 0;
}

void printArray(int row,int col,int arr[row][col])
{
	int i;
	for( i = 0; i < row; i ++ ){
		int j;
        for( j = 0; j < col; j ++ ){
        	printf( "array[%d][%d] = %d   ", i,j,arr[ i ][ j ] );
            if(j == col-1)
        	{
        		printf("\n");
			}
        }
    }
}
