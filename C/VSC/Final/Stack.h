typedef struct Stack{
    Node *top;
    int count;
}Stack;

void InitStack(Stack *);
int IsEmpty(Stack *);
Data Pop(Stack *);
void Push(Stack *,Data);