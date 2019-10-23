#include <stdio.h>
void main()
{
    int a,b;
    void swap(int *, int*);

    printf("Insert Num A: ");
    scanf("%d", &a);
    printf("Insert Num B: ");
    scanf("%d", &b);
    printf("Before       A: %d       B: %d\n",a ,b);
    swap (&a,&b);
    printf("After        A: %d       B: %d\n",a ,b);
}

void swap(int *a, int *b){
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}