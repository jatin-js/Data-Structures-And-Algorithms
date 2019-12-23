struct listNode{ 
	int data;
	struct listNode *next;
};	

int isEmpty(struct listNode *);
int push(struct listNode **, int);
int pop(struct listNode **, int *);
int peek(struct listNode *, int *);
int traverse(struct listNode *);
