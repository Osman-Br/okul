#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack{
    int index;
    int size;
    int* array;
};

struct Stack* createStack(int size){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->index = -1;
    stack->size = size;
    stack->array = (int*)malloc(sizeof(int)*size);
    return stack;
}

bool isFull(struct Stack* stack){
    if(stack->size-1 == stack->index)
        return true;
    else
        return false;
}

void add(struct Stack* stack, int element){
    if(isFull(stack))
        return;
    stack->array[++stack->index] = element;
}

bool isEmpty(struct Stack *stack) {
    if (stack->index == -1)
        return true;
    else
        return false;

}

void eraseLast(struct Stack* stack){
    if(isEmpty(stack))
        return;
    stack->array[stack->index] = -1;
    stack->index -= 1;
}

void moveToOtherStack(struct Stack* source, struct Stack* destination)
{
    int temp = source->array[source->index];
    eraseLast(source);
    add(destination, temp);

}

void printStacks(struct Stack* stack1,struct Stack* stack2,struct Stack* stack3){
    struct Stack* stackArray[] = {stack1,stack2,stack3};
    for(int j = 0 ; j < 3 ; j++) {
        for (int i = stackArray[j]->size-1; i > -1 ; i--) {
            printf("%d.cubuk %d.kat disk : %d\n",j+1, i, stackArray[j]->array[i]);
        }
    }
}

int main(){
    struct Stack* stick1 = createStack(3);
    struct Stack* stick2 = createStack(3);
    struct Stack* stick3 = createStack(3);

    add(stick1, 3);
    add(stick1, 2);
    add(stick1, 1);

    printf("-------------------siralanmadan once--------------------\n\n");
    printStacks(stick1,stick2,stick3);

    moveToOtherStack(stick1,stick3);
    moveToOtherStack(stick1,stick2);
    moveToOtherStack(stick3,stick2);
    moveToOtherStack(stick1,stick3);
    moveToOtherStack(stick2,stick1);
    moveToOtherStack(stick2,stick3);
    moveToOtherStack(stick1,stick3);

    printf("-------------------siralandiktan sonra-----------------\n\n");
    printStacks(stick1,stick2,stick3);

    return 0;
}
