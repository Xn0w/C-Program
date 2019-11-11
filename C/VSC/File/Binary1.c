#include <stdio.h>
int main()
{
    int x = 10;
    FILE *fi, *fib;

    fi = fopen("data.txt","w");
    fib = fopen("data.bin", "wb");

    fprintf(fi, "%d\n", x);
    fwrite(&x, sizeof(int),1,fib);

    fclose(fi);
    fclose(fib);

    return 0;
}