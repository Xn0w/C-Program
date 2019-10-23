#include <stdio.h>
int main()
{
    int *i, *j;
    int Num[10] = {4,7,5,1,0,2,3,9,6,8};

    printf("Array : Num[1] = %d     Num[8]=%d\n", Num[1], Num[8]);

    i = Num;
    printf("Pointer1 : Num[1] = %d     Num[8]=%d\n", *(i+1), *(i+8));
    j = &Num[0];
    printf("Pointer2 : Num[1] = %d     Num[8]=%d\n", *(j+1), *(j+8));

    return 0;
}