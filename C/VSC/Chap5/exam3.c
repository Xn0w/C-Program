#include <stdio.h>
int main(void)
{
    int i;
    int result = 0;

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &i);

    (i %2 == 0) ? printf("even\n") : printf("odd\n");
    
    printf("���ڴ� %d�Դϴ�.\n", i);

    return 0;
}