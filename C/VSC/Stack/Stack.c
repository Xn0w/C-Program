#include <stdio.h>
#include <stdlib.h>
typedef char Data;
typedef struct Node{
    Data d;
    struct Node *Next;
}Node;
typedef struct Stack{
    Node *top;
    int count;
}Stack;
int main()
{
    void InitStack(Stack *);
    int IsEmpty(Stack *);
    Data Pop(Stack *);
    void Push(Stack *,Data);
    Data d;
    Stack stack;
    int i;

    InitStack(&stack);
    if(IsEmpty(&stack)) printf("Stack is Empty!\n");
    d = 'a';
    for(i=1; i<=5; i++){
        Push(&stack, d);
        d++;
    }
    printf("Complete 5 datas in Stack\n");
    while(!IsEmpty(&stack)){
        printf("%c ",Pop(&stack));
        printf("%d \n",stack.count);
    }
    printf("\nComplete!!\n");
    return 0;
}
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