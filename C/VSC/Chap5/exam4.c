#include <stdio.h>
#include <math.h>
int main (void)
{
    double i;
    double rst=0.0;

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%lf", &i);

    rst = ((int)i%2 == 0)? pow(i,2):pow(i,3);
    printf("���: %lf", rst);

    /*if((int)i%2 == 0 ){
        rst = pow(i,2);
    
        printf("���: %lf", rst);
    }
    else {
        rst = pow(i,3);

        printf("��� : %lf", rst);

    }*/


    return 0;
}