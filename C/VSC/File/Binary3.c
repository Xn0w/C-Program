#include <stdio.h>
int main()
{
    FILE *fib;
    int i,x[10];
    fib = fopen("data1.bin","rb");

    fread(x,sizeof(int),10,fib);

    for(i=0;i<10;i++){
        printf("%d ", x[i]);
    }

    fclose(fib);

    return 0;
}