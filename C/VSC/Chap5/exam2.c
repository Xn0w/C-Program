#include <stdio.h>
int main(void)
{
    int score;

    printf("점수를 입력하시오: ");
    scanf("%d",&score);

    if (score>=90 && score<=100)
        printf("A학점입니다. %d\n", score);
    else if (score>= 80 && score<90)
        printf("B학점입니다. %d\n", score);
    else if (score>= 70 && score<80)
        printf("C학점입니다. %d\n", score);
    else if (score>= 60 && score<70)
        printf("D학점입니다. %d\n", score);
    else if (score<60)
        printf("F학점입니다. %d\n", score);
    else if (score>100)
        printf("최고점수는 100점까지입니다 %d\n", score);

    return 0;
}