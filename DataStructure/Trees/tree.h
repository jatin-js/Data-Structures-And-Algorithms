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
int iterativeInorder(struct Node *);
int iterativePreorder(struct Node *);
struct Node* lotTree(int arr[], int , int );
