#include <stdio.h>
int main()
{
    int i =1;
    int sum = 0;

    for(;;){
        if(i == 10) break; //i가 10일 때 루프 끝으로 이동
        sum += i++;
        printf("Result: %d\n", sum);
    }
    printf("Final Result: %d\n", sum);

    return 0;
}