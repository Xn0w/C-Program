#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *fi, *fo;
    int num, sex;
    char name[20];
    double grade;

    fi = fopen("student_in.txt", "r");
    fo = fopen(argv[2], "w");

    int i;
    printf("Program Name : %s\n", argv[0]);
    printf("Argument Number : %d\n", argc);
    
    if(argc<2)
        printf("Argument is not exist!\n");
    else {
        for(i=0; i<argc; i++)
            printf("Argument %d : %s\n", i, argv[i]);
    }
    while((fscanf(fi,"%d %s %d %lf", &num, name, &sex, &grade)) != EOF){
        fprintf(fo,"%s %d %.2lf\n", name, num, grade);
    }

    fclose(fi);
    fclose(fo);
    
    return 0;
}