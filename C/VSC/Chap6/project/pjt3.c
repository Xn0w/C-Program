#include <stdio.h>
int main()
{
    int i = 0;
    int sum = 0;
    
    while (i<=100){
        if(i %2 == 1){ // i가 홀수일때 루프 안으로 이동
            i++;
            continue;
        }
        if (i == 20) break; //i가 20일 때 루프 끝으로 이동

        sum += i++;
    }
    printf("Result: %d", sum);
    return 0;
}