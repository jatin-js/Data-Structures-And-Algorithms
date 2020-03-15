struct node{
	struct Node *data;
	struct node *next;
};

struct Queue{
	struct node *front,*rear;
};

void init(struct Queue *);
int isEmpty(struct Queue *);
int enQueue(struct Queue *, struct Node *);
int deQueue(struct Queue *, struct Node **);
void destroyQueue(struct Queue *);

