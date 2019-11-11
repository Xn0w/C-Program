#include <stdio.h>
#include <stdlib.h>
#define Is ==
int main()
{
    FILE *fi, *fo;
    int num,sex;
    char name[20];
    double grade;

    fi = fopen("student_in.txt","r");
    fo = fopen("student_rst1.txt","w");

    if(fi Is NULL){
        printf("해당 파일을 찾을 수 없습니다.");
        exit(1);
    }

    while((fscanf(fi,"%d %s %d %lf",&num, name, &sex, &grade)) != EOF) {
            fprintf(stdout,"%s %d %.2lf\n",name, num, grade);
            fprintf(fo,"%s %d %.2lf\n",name ,num ,grade);
        }
    fclose(fi);
    fclose(fo);

    return 0;
}
