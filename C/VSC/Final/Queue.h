typedef struct Queue{
    Node *front;
    Node *rear;
    int count;
}Queue;
typedef enum {true = 1, TRUE = 1, false = 0, FALSE = 0} Bool;

void InitQueue(Queue *);
Bool WasEmpty(Queue *);
Data vfront(Queue *);
void Enqueue(Queue *, Data);
Data Dequeue(Queue *);