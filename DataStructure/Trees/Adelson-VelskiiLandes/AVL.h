struct Node{
	int data;
	struct Node *left, *right;
	Node(int data){
	this->data=data;
	this->left=this->right=NULL;
	}
};

void insertNode(struct Node**, struct Node *);
void restoreLeftSubtree(struct Node **);
void restoreRightSubtree(struct Node **);
void leftRotation(struct Node **);
void rightRotation(struct Node **);
int height(struct Node *);
int preorder(struct Node *);
void deleteNode(struct Node **, int);
int findLeast(struct Node *);



