#include <stdio.h>
#define SIZE 10
int main()
{
    int i, j, m =SIZE;
    int tmp;
    int price[SIZE]= {9,11,6,30,17,10,23,19,7,21};

    for(i=0; i<SIZE; i++){

        printf("%d ", price[i]);
    }
    printf("\n");

    for(i=0; i<SIZE-1; i++){
        for(j=0; j<m-1; j++){
            if(price[j] > price[j+1]){
                tmp = price[j];             //임시 저장변수
                price[j] = price[j+1];
                price[j+1] = tmp;
            }
        }
        m--;
        printf("m =%d\n", m);
    }
    for(i=0; i<SIZE; i++){

        printf("%d ", price[i]);
    }
    
    return 0;
}