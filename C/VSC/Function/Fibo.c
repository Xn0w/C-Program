#include <stdio.h>
#define LIMIT 46
int main()
{
    long f0=0, f1=1, n, tmp;
    void Print01();
    void Fibonacci(long f0, long f1, long n, long tmp);

    Print01();

    Fibonacci(f0,f1,n,tmp);
    
    return 0;
}

void Print01()
{
    printf("----------Fibonacci Number----------\n");
    printf(" 1                                 0\n");
    printf(" 2                                 1\n");
}

void Fibonacci(long f0, long f1, long n, long tmp)
{
    for(n=2; n<=LIMIT; n++){
    tmp = f1;
    f1 += f0;
    f0 = tmp;
    printf("%2d                                 %d\n",n+1 ,f1);
    }
}

