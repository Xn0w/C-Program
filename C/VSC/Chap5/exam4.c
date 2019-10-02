#include <stdio.h>
#include <math.h>
int main (void)
{
    double i;
    double rst=0.0;

    printf("숫자를 입력하시오: ");
    scanf("%lf", &i);

    rst = ((int)i%2 == 0)? pow(i,2):pow(i,3);
    printf("결과: %lf", rst);

    /*if((int)i%2 == 0 ){
        rst = pow(i,2);
    
        printf("결과: %lf", rst);
    }
    else {
        rst = pow(i,3);

        printf("결과 : %lf", rst);

    }*/


    return 0;
}