#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "r");
    while (1) {
        if(fp == NULL) {
            printf("파일이 없습니다.\n");
            fp = fopen("sample.txt", "w");
            printf("파일을 새로 생성하였습니다.");
            continue;
        }
        else {
            printf("파일이 존재합니다.\n");
            break;
        }
    }
    fclose(fp);
    return 0;
}