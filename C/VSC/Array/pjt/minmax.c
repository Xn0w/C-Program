#include <stdio.h>
#define SIZE 10
int main()
{
    int i = 0;
    int max,min;
    int price[SIZE]= {9,11,16,30,17,10,23,19,7,21};
    min = max = price[0];
    
    for(i=0; i<10; i++ ){
        if(price[i] < min)
            min = price[i];     //price�� �ּҰ�
        if(price[i] > max)
            max = price[i];     //price�� �ִ밪
    }
    printf("MIN = %d, MAX = %d",min , max);

    return 0;
}