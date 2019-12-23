int isEmpty(struct Node *root){
	if(!root)
		return 1;
	return 0;	
}

int createTree(struct Node **root){
	struct Node *newNode1=new struct Node;
	newNode1->data=10;
	newNode1->left=newNode1->right=NULL;
	*root=newNode1;
	struct Node *newNode2=new struct Node;
	newNode2->data=7;
	newNode2->left=newNode2->right=NULL;
	(*root)->left=newNode2;
	struct Node *newNode3=new struct Node;
	newNode3->data=15;
	newNode3->left=newNode3->right=NULL;
	(*root)->right=newNode3;
	struct Node *newNode4=new struct Node;
	newNode4->data=5;
	newNode4->left=newNode4->right=NULL;
	(*root)->left->left=newNode4;
	struct Node *newNode5=new struct Node;
	newNode5->data=8;
	newNode5->left=newNode5->right=NULL;
	(*root)->left->right=newNode5;
	struct Node *newNode6=new struct Node;
	newNode6->data=11;
	newNode6->left=newNode6->right=NULL;
	(*root)->right->left=newNode6;
	struct Node *newNode7=new struct Node;
	newNode7->data=20;
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

int searchKey(struct Node *root, int key, struct Node **pred){
	struct Node *temp=root;
	while(temp && temp->data!=key){
		*pred=temp;
		if(key<temp->data)
			temp=temp->left;
		else
			temp=temp->right;
	}
	if(!temp)			
		return 0;
	else
		return 1;
}	 
	
int recSearchKey(struct Node *root, int key, struct Node **pred){
	if(!root) 
		return 0;
	else if(root->data==key)
		return	1;
	else if(root->data<key){
		*pred=root;
		return recSearchKey(root->right, key, pred);	
	}
	else{
		*pred=root;
		return recSearchKey(root->left, key, pred);	
	}
}	


/*struct Node* preToBST(int pre[], int n){
	int i=0;
	struct sNode* top=NULL ;
	struct Node* root=new struct Node, * ptr;
	root->data=pre[i++];
	root->left=root->right=NULL;
	struct Node* temp=root;
	while(i<n){
		if(pre[i]<temp->data){
			struct Node* newNode=new struct Node;
			newNode->data=pre[i++];
			newNode->left=newNode->right=NULL;
			temp->left=newNode;
			push(&top, temp);
			temp=newNode;	
		}
		else{
		
			if(pre[i]>temp->data && pre[i]<peek(top,&ptr) && pre[i]<ptr->data){
				struct Node* newNode=new struct Node;
				newNode->data=pre[i++];
				newNode->left=newNode->right=NULL;
				temp->right=newNode;
				temp=newNode;
			}
			else{
				pop(&top, &temp);			
			}		
		}
	}
	return root;	 

}*/








	
