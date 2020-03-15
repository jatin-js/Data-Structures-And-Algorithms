struct Node{ 
	int data;
	struct Node *next;
};	

int isEmpty(struct Node *);
int push(struct Node **, int);
int pop(struct Node **, int *);
int peek(struct Node *);
int traverse(struct Node *);
