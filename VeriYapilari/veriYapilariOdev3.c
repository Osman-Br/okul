#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack{ //yığıt veri yapısının tanımı
    int top; //yığıtta son elemanı gosterecek olan degisken
    int size;  //yığıtın eleman sayısını tutan degisken
    int* array;  //yığıttaki elemanların bellekteki yerini tutacak olan pointer
};

struct Stack* createStack(int size){        //yığıt oluşturma fonksiyonu
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));  //oluşturulacak yığıt için bellekte yer açar.
    stack->top = -1;                                                  //yığıt bos oldugu icin en ustteki elemanin indisi -1 olarak tanımlanır.
    stack->size = size;                                             //yığıtta bulunacak olan eleman sayisi yığıttaki size degiskenine tanımlanır.
    stack->array = (int*)malloc(sizeof(int)*size);           //yığıtta tutulacak elemanlar için bellekte yer açar.
    for(int i = 0; i < size; i++){
        stack->array[i] = 0;                                  //yığıttaki elemanların varsayılan degeri(yani eleman yoksa) 0 olarak tanımlanır.
    }
    return stack;
}

bool isFull(struct Stack* stack){ //verilen yığıt dolu olduğunda true donduren fonskiyon
    if(stack->size-1 == stack->top)
        return true;
    else
        return false;
}

bool isEmpty(struct Stack *stack) { //verilen yığıt boş olduğunda true donduren fonksiyon
    if (stack->top == -1)
        return true;
    else
        return false;

}

void add(struct Stack* stack, int element){ //verilen yığıtta boş yer varsa ve eklenecek eleman halihazırda olan elemanlardan kucukse elamanı yığıta ekleyen fonksiyon
    if(isFull(stack)) {
        printf("verilen yıgıt dolu baska eleman eklenemez");
        return;
    }
    else if(!isEmpty(stack)){
        if(stack->array[stack->top] < element){
            printf("verilen yıgıttaki elemanlar eklenmek istenenden kucuk");
            return;
        }
    }
    stack->array[++stack->top] = element;
}

void eraseLast(struct Stack* stack){ // verilen yığıttaki sonuncu elemanı silen fonksiyon
    if(isEmpty(stack)){
        printf("verilen stack zaten bos");
        return;
    }
    stack->array[stack->top] = 0;
    stack->top -= 1;
}

void moveToOtherStack(struct Stack* source, struct Stack* destination){ //ilk verilen yığıttaki son elamanı 2. verilen yığıta taşıyan fonksiyon
    int temp = source->array[source->top];
    eraseLast(source);
    add(destination, temp);
}

void printStacks(struct Stack* stack1,struct Stack* stack2,struct Stack* stack3){ //verilen 3 yığıtı yazdıran fonksiyon
    struct Stack* stackArray[] = {stack1,stack2,stack3};
    for(int j = 0 ; j < 3 ; j++) {
        printf("%d.cubuktaki diskler:\n",j+1);
        for (int i = stackArray[j]->size-1; i > -1 ; i--) {
            printf("         %d\n", stackArray[j]->array[i]);
        }
    }
}

bool isSorted(struct Stack* stack){ //verilen stacklarda biri sıralı ise true donduren fonksiyon
    if(stack->top == stack->size-1)  //diskler sirasiz koyulamadıgından sadece en ustteki elemanın indisine bakılıyor
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool gameOver(struct Stack* stack1,struct Stack* stack2){ //oyunun devam edip etmediğini kontrol eden fonksiyon
    if(isSorted(stack1) || isSorted(stack2)){ //verilen cubuklardan biri sırali ise oyun bitecek
        return true;
    }else{
        return false;
    }
}

int main(){
    struct Stack* sticks[] = {createStack(3),createStack(3),createStack(3)};
    int sourceStickIndex = 0;
    int destinationStickIndex = 0;

    add(sticks[0], 3);   //cubuklara elemanlar ekleniyor
    add(sticks[0], 2);
    add(sticks[0], 1);

    printStacks(sticks[0],sticks[1],sticks[2]);

    while(!gameOver(sticks[1],sticks[2]))
    {
        printf("\noynatmak istedigin disk hangi cubukta: ");
        scanf("%d", &sourceStickIndex);                                 //kullanıcıdan hangi cubuktan disk alınacagı
        printf("\nsectigin diski hangi cubuga koymak istiyorsun: ");
        scanf("%d", &destinationStickIndex);                           //ve hangi cubuga koyulacagı ogreniliyor
        moveToOtherStack(sticks[sourceStickIndex-1],sticks[destinationStickIndex-1]);      //secilen cubuklara gore disklerin yerleri degistiriliyor
        printStacks(sticks[0],sticks[1],sticks[2]);  //cubuklar yazdırılıyor
    }

/*    moveToOtherStack(sticks[0],sticks[2]);
    moveToOtherStack(sticks[0],sticks[1]);         //çözulmus hali
    moveToOtherStack(sticks[2],sticks[1]);
    moveToOtherStack(sticks[0],sticks[2]);
    moveToOtherStack(sticks[1],sticks[0]);
    moveToOtherStack(sticks[1],sticks[2]);
    moveToOtherStack(sticks[0],sticks[2]);*/

    printf("\n !!! TEBRİKLER KAZANDINIZ !!!\n");
    printStacks(sticks[0],sticks[1],sticks[2]);

    return 0;
}
