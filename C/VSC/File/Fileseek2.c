#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("data.txt","w");
    if(fp == NULL){
        printf("File doesn't exist!\n");
        exit(1);
    }
    fputs("This is an house.\n",fp);
    fseek(fp,11L,SEEK_SET);
    fputs("apple",fp);
    fclose(fp);
    return 0;
}