#include <stdio.h>
int main(void)
{
    int fprice;             //fprice는 항공권가격
    int hprice;             //hprice는 호텔 1박 가격
    int dprice;             //dprice는 하루경비
    int day;
    int total= 0;

    fprice = 100000;
    hprice = 80000;
    dprice = 150000;

    printf("insert day: ");
    scanf("%d", &day);

    total = fprice + hprice * (day-1) + dprice * day;               //여행경비값

    printf("total: %d\n", total);
    
    return 0;
}