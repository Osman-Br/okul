#include<stdio.h>
#include<stdlib.h>

#define ARRAY_SIZE 5

int findMin(int *array);
void printMin(int(*func)(int*),int *array);

int main(void)
{
	int array[] = {40,30,10,20,60};
	printMin(&findMin,array);
	return 0;
}

int findMin(int *array)
{
	int minValue = *array;
	int i;
	for(i = 1; i < ARRAY_SIZE; i++)
	{
		if(minValue > *(array + i))
		{
			minValue = *(array + i);
		}
	}
	
	return minValue;
}
void printMin(int(*func)(int*),int *array)
{
	printf("Min:%d\n",(*func)(array));
}

