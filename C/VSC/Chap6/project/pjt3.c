#include <stdio.h>
int main()
{
    int i = 0;
    int sum = 0;
    
    while (i<=100){
        if(i %2 == 1){ // i�� Ȧ���϶� ���� ������ �̵�
            i++;
            continue;
        }
        if (i == 20) break; //i�� 20�� �� ���� ������ �̵�

        sum += i++;
    }
    printf("Result: %d", sum);
    return 0;
}