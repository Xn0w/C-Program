#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    int length=0;
    char name[7] = "Program";
    length = strlen(name);

    while(i<length){
        if(i%2 == 1)
        printf("%c",name[i]);   //name�� ¦�� ���ڸ� ���
        i++;
    }

    printf("\n");

    for(i=length; i>=0; i--) {

        printf("%c",name[i]);

    }
    printf("\n");
    printf("length = %d",length); //name[]�� ���� ����

    return 0;
}