#include <stdio.h>
int main(void)
{
    const float speed = 300000000;
    const float distance = 149600000000;

    float time;

    time = distance / speed;

    printf("time: %f\n", time/60);

    return 0;
}