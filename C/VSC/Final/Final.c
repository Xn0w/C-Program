#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
int main()
{
    Queue q;
    Data pid,non,val;
    Stack stack;
    int i;
    InitStack(&stack);
    InitQueue(&q);

    while(1){
        printf("Insert character Enqueues : ");
        scanf("%c%c", &pid, &non);
        if(pid == 'q') break;
        Enqueue(&q,pid);
        Push(&stack, pid);
    }
    printf("-------------------------------------\n");
    while(!WasEmpty(&q) && !IsEmpty(&stack)){
        val = Dequeue(&q);
        printf("Dequeue : %c ",val);
        printf("Pop : %c\n",Pop(&stack));
    }
    return 0;
}
