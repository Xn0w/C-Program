#include <stdio.h>
int main(void)
{
    int i;

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &i);

    if(i>0){
        if(i %2 == 0)
        printf("%d: ¦��\n", i);

        if(i %2 == 1)
        printf("%d: Ȧ��\n", i);
    }
    if(i<0)
    printf("i ���� ����\n");

    return 0;
}