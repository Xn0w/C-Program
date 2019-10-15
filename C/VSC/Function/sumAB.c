#include <stdio.h>
int main()
{
    int i,A,B;
    int sum = 0;
    int SumAB(int, int);

    printf("Insert Two Num: ");
    scanf("%d %d", &A, &B);

    sum = SumAB(A,B);
    
    printf("Sum: %d", sum);

    return 0;
}
int SumAB(int A, int B){
    int i, sum;
    for(i=A; i<=B; i++)
        sum += i;
    return sum;
}