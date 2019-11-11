#include <stdio.h>
#include <stdlib.h>
int main()
{
    long length;
    FILE *fp;

    fp = fopen("student_rst1.txt","r");
    if(fp == NULL){
        fprintf(stdout,"File doesn't exist!\n");
        exit(1);
    }
    fseek(fp,0,SEEK_END);
    length = ftell(fp);
    fprintf(stdout,"File size: %ld\n", length);
    fclose(fp);

    return 0;
}