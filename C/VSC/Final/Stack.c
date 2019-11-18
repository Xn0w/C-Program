#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
void InitStack(Stack *stack)
{
    stack->top = NULL;
}
int IsEmpty(Stack *stack)
{
    if(stack->top == NULL) return 1;
    else return 0;
}
void Push(Stack *stack, Data d)
{
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    temp->d = d;    
    temp->Next = stack->top;
    stack->top = temp;
    stack->count++;
}
Data Pop(Stack *stack)
{
    Node *temp;
    Data d;
    if(IsEmpty(stack)){
        return 0;
    }
    temp = stack->top;
    d = temp->d;
    stack->top = temp->Next;
    stack->count--;
    free(temp);
    return d;
}