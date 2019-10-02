#include <stdio.h>
int main()
{
    int i, n=0;
    int fac=1;

    printf("insert number: ");
    scanf("%d",&i);

    for(n=1; n<10; n++){
        printf("%d * %d = %d\n",i, n, i*n);
    }

    for(n=i; n > 0; n--){
        fac *= n;
    }
    printf("n!: %d\n",fac);
    return 0;

}