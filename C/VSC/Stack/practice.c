#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
int main()
{
    Queue q;
    InitQueue(&q);
    Data pid, non, val;

    while(1){
        printf("Insert Character Enqueues : ");
        scanf("%c%c", &pid, &non);
        if(pid == 'q') break;
        Enqueue(&q, pid);
    }
    printf("---------------------------------\n");
    while(!IsEmpty(&q)){
        val = Dequeue(&q);
        printf("Dequque : %c\n", val);
    }
    return 0;
}
void InitQueue(Queue *q)
{
    q->front = q->rear = NULL;
    q->count = 0;    
}

Bool IsEmpty(Queue *q)
{
    if(q->front == q->rear && q->count == 0){
        return TRUE;
    }
    else
    {
        return FALSE;
    }    
}
Data vfront(Queue *q)
{
    return (q->front->d);
}

void Enqueue(Queue *q, Data d)
{
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    temp->d = d;
    temp->Next = NULL;
    if(IsEmpty(q))
    {
        q->front = q->rear = temp;
    }
    else
    {
        q->rear->Next = temp;
        q->rear = temp;
    }
    q->count++;
}

Data Dequeue(Queue *q)
{
    Node *temp;
    Data d;
    if(!IsEmpty(q))
    {
        temp = q->front;
        q->front = temp->Next;
        d = temp->d;
        q->count--;
        free(temp);
        return d;
    }
    else
    {
        printf("Empty!\n");
        return FALSE;
    }
    
}