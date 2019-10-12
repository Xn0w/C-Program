#include <stdio.h>
int main()
{
    int i, j;
    char name[3][2] = {{'K','L'},{'I','E'},{'M','E'}};

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("name[%d][%d]=%c ",i ,j, name[i][j]);
        }
        printf("\n");
    }
    return 0;
}