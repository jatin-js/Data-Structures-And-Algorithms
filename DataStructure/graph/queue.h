struct Node{
	int data;
	struct Node *next;
};

struct Queue{
	struct Node *front,*rear;
};

void init(struct Queue *);
int isEmpty(struct Queue *);
int enQueue(struct Queue *, int);
int deQueue(struct Queue *, int *);
int peekFront(struct Queue *);
int peekRear(struct Queue *, int *);
int traverse(struct Queue *, int *);
int queueQuestion(struct Queue *);	
