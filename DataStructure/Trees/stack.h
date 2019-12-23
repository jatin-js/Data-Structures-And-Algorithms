struct sNode{ 
	struct Node *data;
	struct sNode *next;
};	

int isEmpty(struct sNode *);
int push(struct sNode **, struct Node *);
int pop(struct sNode **, struct Node **);
int peek(struct sNode *, struct Node **);
int traverse(struct sNode *);
