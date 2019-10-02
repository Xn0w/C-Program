#include <stdio.h>
int main(void)
{
    int score;
    printf("점수를 입력하시오: ");
    scanf("%d",&score);

    if(score > 100 || score < 0)
        printf("Data Error\n");
    else{
        switch(score/10){
            case 10: 
            case  9: printf("A학점입니다.\n");  break;
            case  8: printf("B학점입니다.\n");  break;
            case  7: printf("C학점입니다.\n");  break;
            case  6: printf("D학점입니다.\n");  break;
            default: printf("F학점입니다.\n");
        }
    }

    return 0;
}