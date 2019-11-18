#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
void InitQueue(Queue *q)
{
    q->front = q->rear = NULL;
    q->count = 0;
}

Bool WasEmpty(Queue *q)
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
    if(WasEmpty(q))
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
    if(!WasEmpty(q)){
        temp = q->front;
        q->front = temp->Next;
        d = temp->d;
        q->count--;
        free(temp);
        return d;
    }
    else{
        printf("Empty!\n");
        return FALSE;
    }
}