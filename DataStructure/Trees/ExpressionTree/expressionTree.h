struct Node{
	char data;
	struct Node *left;
	struct Node *right;
};

int isEmpty(struct Node *);
int createTree(struct Node **);	 
int BFT(struct Node *);
int inorder(struct Node *);

