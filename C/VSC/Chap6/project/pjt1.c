#include <stdio.h>
int main()
{
    int i, n=0;
    int fac=1;

    printf("insert number: ");
    scanf("%d",&i);

    while(n<9){
        n++;
        printf("%d * %d = %d\n",i, n, i*n);
    }

    while(i > 0){
        fac *= i;
        --i;
    }
    printf("n!: %d\n",fac);
    return 0;

}