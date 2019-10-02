#include <stdio.h>
int main(void)
{
    const float speed = 300000000;
    const float distance = 149600000000;

    float time;

    time = distance / speed;
    time = time / 60 ;

    printf("time: %f\n", time);
    return 0;
}