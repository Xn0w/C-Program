#include <stdio.h>
int main(void)
{
    int score;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d",&score);

    if (score>=90 && score<=100)
        printf("A�����Դϴ�. %d\n", score);
    else if (score>= 80 && score<90)
        printf("B�����Դϴ�. %d\n", score);
    else if (score>= 70 && score<80)
        printf("C�����Դϴ�. %d\n", score);
    else if (score>= 60 && score<70)
        printf("D�����Դϴ�. %d\n", score);
    else if (score<60)
        printf("F�����Դϴ�. %d\n", score);
    else if (score>100)
        printf("�ְ������� 100�������Դϴ� %d\n", score);

    return 0;
}