struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

int isEmpty(struct Node *);
int createTree(struct Node **);	 
int BFT(struct Node *);
int inorder(struct Node *);
int preorder(struct Node *);
int postorder(struct Node *);
int searchKey(struct Node *, int, struct Node **);
int recSearchKey(struct Node *, int, struct Node **);	
struct Node* preToBST(int arr[], int);
