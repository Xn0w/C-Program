#include <stdio.h>
#include <string.h>
int main()
{
    struct Card {
        int pips;
        char suits;
    }c1,c2;

    struct Student {
        int number;
        char name[20];
        int sex;
        double grade;
    };
    struct Student s1;
    c1.pips = 3;
    c1.suits = 's';
    c2.pips = 11;
    c2.suits = 'd';

    s1.number = 200001001;
    strcpy(s1.name, "KIM");
    s1.sex = 0;
    s1.grade = 3.12;

    printf("Card : %c Number : %d\n", c1.suits,c1.pips);
    printf("ID Num : %d, Name : %s, Sex: %d, Grade: %.2lf\n",
            s1.number,s1.name,s1.sex,s1.grade);

    return 0;
}