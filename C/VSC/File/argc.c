#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char File1[100], File2[100];

    printf("���� �����̸�: ");
    scanf("%s", File1);

    printf("���� �����̸�: ");
    scanf("%s", File2);

    if((fp1 = fopen(File1, "r"))==NULL)
    {
        fprintf(stderr,"���� ����%s�� �� �� �����ϴ�.\n", File1);
        exit(1);
    }
    if((fp1 = fopen(File2, "w"))==NULL)
    {
        fprintf(stderr,"���� ����%s�� �� �� �����ϴ�.\n", File2);
        exit(1);
    }
    int c;

    while((c = fgetc(fp1)) != EOF)
        fputc(c, fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}