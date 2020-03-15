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
	else if(key<(*root)->data){
		if(search(&((*root)->left), key, ptr)){
			if((*root)->left->data>key){
				rightRotation(root);
				rightRotation(root);		
			} 
			else if((*root)->left->data<key){	
				leftRotation(&((*root)->left));
				rightRotation(root);			
			}
		return 1;
		}
		return 0;
	}
	else if(key>(*root)->data){
		if(search(&((*root)->right), key, ptr)){
			if((*root)->right->data<key){
				leftRotation(root);
				leftRotation(root);		
			} 
			else if((*root)->right->data>key){	
				rightRotation(&((*root)->right));
				leftRotation(root);			
			}
		return 1;		
		}
	return 0;
	}
	*ptr=*root;
	return 1;
}





















