int isEmpty(struct Node *root){
	if(!root)
		return 1;
	return 0;	
}

int createTree(struct Node **root){
	struct Node *newNode1=new struct Node;
	newNode1->data=1;
	newNode1->left=newNode1->right=NULL;
	*root=newNode1;
	struct Node *newNode2=new struct Node;
	newNode2->data=2;
	newNode2->left=newNode2->right=NULL;
	(*root)->left=newNode2;
	struct Node *newNode3=new struct Node;
	newNode3->data=3;
	newNode3->left=newNode3->right=NULL;
	(*root)->right=newNode3;
	struct Node *newNode4=new struct Node;
	newNode4->data=4;
	newNode4->left=newNode4->right=NULL;
	(*root)->left->left=newNode4;
	struct Node *newNode5=new struct Node;
	newNode5->data=5;
	newNode5->left=newNode5->right=NULL;
	(*root)->left->right=newNode5;
	struct Node *newNode6=new struct Node;
	newNode6->data=6;
	newNode6->left=newNode6->right=NULL;
	(*root)->right->left=newNode6;
	struct Node *newNode7=new struct Node;
	newNode7->data=7;
	newNode7->left=newNode7->right=NULL;
	(*root)->right->right=newNode7;
	return 1;
}
	

/*int BFT(struct Node *root){
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
}*/

int inorder(struct Node *root){
	if(isEmpty(root))
		return 0;
	inorder(root->left);
	cout<<root->data<<' ';
	inorder(root->right);
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
/*
int iterativeInorder(struct Node *root){
	if(!root) return 0;
	struct sNode *top=NULL;
	struct Node *temp=root;
	while(!isEmpty(top) || temp){
		while(temp){
			push(&top, temp);
			temp=temp->left;
		}
		pop(&top, &temp);
		cout<<temp->data;
		temp=temp->right;
	}
	return 1;
}


int iterativePreorder(struct Node *root){
	if(!root) return 0;
	struct sNode *top=NULL;
	struct Node *temp=root;
	while(!isEmpty(top) || temp){
		while(temp){
			push(&top, temp);
			cout<<temp->data;
			temp=temp->left;
		}
		pop(&top, &temp);
		temp=temp->right;
	}
	return 1;
}*/

struct Node* lotTree(int arr[], int i, int n){
	if(i>=n) return NULL;
	struct Node *root=new struct Node;
	root->data=arr[i];
	root->left=lotTree(arr, 2*i+1, n);
	root->right=lotTree(arr, 2*i+2, n);
	return root;
}

int maxIndex(int arr[], int start, int end){
	int index=start, i;
	for(i=start+1;i<=end;i++){
		if(arr[i]>arr[index])
			index=i;
	}
	return index;
}


struct Node* specialTree(int arr[], int start, int end){
	if(start>end) return NULL;
	struct Node *root=new struct Node;	
	int index=maxIndex(arr, start, end);
	root->data=arr[index];
	root->left=specialTree(arr, start, index-1);
	root->right=specialTree(arr, index+1, end);
	return root;
}

	
