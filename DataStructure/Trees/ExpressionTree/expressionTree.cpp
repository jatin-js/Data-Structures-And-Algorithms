int isEmpty(struct Node *root){
	if(!root)
		return 1;
	return 0;	
}

int createTree(struct Node **root){
	struct Node *newNode1=new struct Node;
	newNode1->data='-';
	newNode1->left=newNode1->right=NULL;
	*root=newNode1;
	struct Node *newNode2=new struct Node;
	newNode2->data='*';
	newNode2->left=newNode2->right=NULL;
	(*root)->left=newNode2;
	struct Node *newNode3=new struct Node;
	newNode3->data='2';
	newNode3->left=newNode3->right=NULL;
	(*root)->right=newNode3;
	struct Node *newNode4=new struct Node;
	newNode4->data='+';
	newNode4->left=newNode4->right=NULL;
	(*root)->left->left=newNode4;
	struct Node *newNode5=new struct Node;
	newNode5->data='3';
	newNode5->left=newNode5->right=NULL;
	(*root)->left->right=newNode5;
	struct Node *newNode6=new struct Node;
	newNode6->data='5';
	newNode6->left=newNode6->right=NULL;
	(*root)->left->left->left=newNode6;
	struct Node *newNode7=new struct Node;
	newNode7->data='4';
	newNode7->left=newNode7->right=NULL;
	(*root)->left->left->right=newNode7;
	return 1;
}
	

int BFT(struct Node *root){
	if(isEmpty(root))
		return 0;
	struct Queue q;
	init(&q);
	struct Node *ptr;
	enQueue(&q, root);
	while(!isEmpty(&q)){
		deQueue(&q, &ptr);
		cout<<ptr->data<<' ';
		if(ptr->left)
			enQueue(&q, ptr->left);
		if(ptr->right)
			enQueue(&q, ptr->right);
	}
	destroyQueue(&q);
	return 1;
}

int inorder(struct Node *root){
	if(isEmpty(root))
		return 0;
	if(root->data=='+' || root->data=='-' || root->data=='*' || root->data=='/')
		cout<<'(';
	inorder(root->left);
	cout<<root->data<<' ';
	inorder(root->right);
	if(root->data=='+' || root->data=='-' || root->data=='*' || root->data=='/')
		cout<<')';
	return 1;
}

int preorder(struct Node *root){
	if(isEmpty(root))
		return 0;
	cout<<root->data<<' ';
	preorder(root->left);	
	preorder(root->right);
	return 1;
}

int postorder(struct Node *root){
	if(isEmpty(root))
		return 0;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<' ';	
	return 1;
}
















	
