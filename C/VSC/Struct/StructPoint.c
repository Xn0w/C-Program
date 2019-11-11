#include <stdio.h>
#include <string.h>
int main()
{
    struct Card {
        int pips;
        char suits;
    }c1,*c;

    struct Student {
        int number;
        char name[20];
        int sex;
        double grade;
    };
    struct Student s1,*s;
    c1.pips = 3;
    c1.suits = 's';
    c = &c1;

    s1.number = 200001001;
    strcpy(s1.name, "KIM");
    s1.sex = 0;
    s1.grade = 3.12;
    s = &s1;

    printf("Card : %c Number : %d\n", c->suits,c->pips);
    printf("ID Num : %d, Name : %s, Sex: %d, Grade: %.2lf\n",
            s->number, s->name, s->sex, s->grade);

    return 0;
}