#include <stdio.h>
#define SIZE 10
int main()
{
    int i,x[10] = {10,11,12,13,14,15,16,17,18,19};
    FILE *fi, *fib;

    fi = fopen("data1.txt","w");
    fib = fopen("data1.bin", "wb");

    for(i=0; i<SIZE; i++){
    fprintf(fi, "%d\n", x[i]);
    fwrite(&x[i], sizeof(int),1,fib);
    }

    fclose(fi);
    fclose(fib);

    return 0;
}