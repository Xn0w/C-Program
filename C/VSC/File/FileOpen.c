#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "r");
    while (1) {
        if(fp == NULL) {
            printf("������ �����ϴ�.\n");
            fp = fopen("sample.txt", "w");
            printf("������ ���� �����Ͽ����ϴ�.");
            continue;
        }
        else {
            printf("������ �����մϴ�.\n");
            break;
        }
    }
    fclose(fp);
    return 0;
}