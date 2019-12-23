struct Node{
	int data;
	struct Node *left, *right;
	Node(int data){
	this->data=data;
	this->left=this->right=NULL;
	}
};

void insertNode(struct Node**, struct Node *);
void leftRotation(struct Node **);
void rightRotation(struct Node **);
int search(struct Node**, int, struct Node **);
int inorder(struct Node* );



