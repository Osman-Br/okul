#include<stdio.h>
void func(int parameter);

int main(void)
{
	void(*funcPtr)(int) = &func;
	(*funcPtr)(10);
	printf("%d",&func);
	
	return 0;
	
}
void func(int parameter)
{
	printf("Values:%d\n",parameter);
}
