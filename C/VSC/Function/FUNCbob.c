#include <stdio.h>
#define SIZE 10
int main()
{
    int i, j;
    int price[SIZE]= {9,11,6,30,17,10,23,19,7,21};
    void PrintArray(int[]);
    void Swap(int [], int);

    PrintArray(price);

    for(i=0; i<SIZE-1; i++){
        for(j=0; j<SIZE-i-1; j++){
            if(price[j] > price[j+1])
                Swap(price, j);
        }
    }

    PrintArray(price);

    return 0;
}

void PrintArray(int price[])
{
    int i;
    printf("[ ");
    for(i=0; i<SIZE; i++){
        printf("%d ", price[i]);
    }
    printf("]\n");
}

void Swap(int price[], int j)
{
    int tmp;
    tmp = price[j];
    price[j] = price[j+1];
    price[j+1] = tmp;
}