typedef char Data;
typedef struct Node{
    Data d;
    struct Node *Next;
}Node;
typedef struct Stack{
    Node *top;
    int count;
}Stack;

typedef struct Queue{
    Node *front;
    Node *rear;
    int count;
}Queue;
typedef enum {true = 1, TRUE = 1, false = 0, FALSE = 0} Bool;

void InitStack(Stack *);
int IsEmpty(Stack *);
Data Pop(Stack *);
void Push(Stack *,Data);
void InitQueue(Queue *);
Bool WasEmpty(Queue *);
Data vfront(Queue *);
void Enqueue(Queue *, Data);
Data Dequeue(Queue *);