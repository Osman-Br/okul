#include<stdio.h>

int cubeByReference(int *nPtr);

int main(void)
{
	int number = 5;
    printf("The original value of number is %d\n",number);
    
    cubeByReference(&number);
    printf("The new value of number is %d\n",number);
	
	return 0;
}

int cubeByReference(int *nPtr)
{
	*nPtr = *nPtr**nPtr**nPtr;
}
