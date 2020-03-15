void insertNode(struct Node** root, struct Node* ptr){
	if(!*root) {
		*root=ptr;
		return;	
	}
	if(ptr->data<(*root)->data){
		insertNode(&((*root)->left), ptr);
	}
	if(ptr->data>(*root)->data){
		insertNode(&((*root)->right), ptr);
	}

}

void leftRotation(struct Node **root){
	struct Node* temp=(*root)->right;
	(*root)->right=temp->left;
	temp->left=(*root);
	*root=temp;
}


void rightRotation(struct Node **root){
	struct Node* temp=(*root)->left;
	(*root)->left=temp->right;
	temp->right=(*root);
	*root=temp;
}

int preorder(struct Node *root){
	if(!root)
		return 0;
	cout<<root->data<<' ';
	preorder(root->left);	
	preorder(root->right);
	return 1;

}


int  search(struct Node** root, int key, struct Node** ptr){
	if(!*root) return 0;
	if((*root)->data==key){
		*ptr=*root;
		return 1;		
	}
	else if(key<(*root)->data){
		if(search(&((*root)->left), key, ptr)){
		rightRotation(root);
		return 1;
		}
	}
	else if(key>(*root)->data){
		if(search((&(*root)->right), key, ptr)){
		leftRotation(root);
		return 1;		
		}
	}
	return 0;
}






















