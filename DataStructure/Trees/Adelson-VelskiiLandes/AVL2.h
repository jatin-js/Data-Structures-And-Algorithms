struct Node{
	int data;
	struct Node *left, *right;
	Node(int data){
	this->data=data;
	this->left=this->right=NULL;
	}
};

struct Node* insertNode(struct Node*, struct Node *);
struct Node*  restoreLeftSubtree(struct Node *);
struct Node*  restoreRightSubtree(struct Node *);
struct Node* leftRotation(struct Node *);
struct Node*  rightRotation(struct Node *);
int  height(struct Node *);
int preorder(struct Node *);
struct Node*  deleteNode(struct Node *, int);
int findLeast(struct Node *);



