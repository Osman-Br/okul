#include<stdio.h>
#define ARRAY_SIZE 4

int main(void)
{
	int b[] = {10,20,30,40};
	int *bPtr = b;
	
	size_t i;
	size_t offset;
	
	for(i=0; i<ARRAY_SIZE;i++)
	{
		printf("b[%u] = %d\n",i,b[i]);
	}
	
	for(offset = 0; offset < ARRAY_SIZE; offset++)
	{
		printf("*(b +%u) = %d\n",offset,*(b + offset) );
	}
	
	for(i = 0; i < ARRAY_SIZE; i++)
	{
		printf("bPtr[%u] = %d\n",i,bPtr[i]);
	}
	for(offset = 0; offset < ARRAY_SIZE; offset++)
	{
		printf("*(bPtr +%u) = %d\n",offset,*(bPtr + offset) );
	}
	return 0;
}

