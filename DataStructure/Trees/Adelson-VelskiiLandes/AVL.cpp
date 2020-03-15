void insertNode(struct Node **root, struct Node *ptr){
	if(!*root){
		*root=ptr;
		return;
	} 
	

	else if(ptr->data>(*root)->data){
		insertNode(&((*root)->right), ptr);
		restoreRightSubtree(root);				
	}

	else if(ptr->data<(*root)->data){
		insertNode(&((*root)->left), ptr);
		restoreLeftSubtree(root);				

	} 
	
}

void restoreRightSubtree(struct Node **root){
	if(height((*root)->left)-height((*root)->right)==-2 && height((*root)->right->left)-height((*root)->right->right)<=0){
		leftRotation(root);


	} 

	if(height((*root)->left)-height((*root)->right)==-2 && height((*root)->right->left)-height((*root)->right->right)==1){
		rightRotation(&((*root)->right));
		leftRotation(root);
	} 

}

void restoreLeftSubtree(struct Node **root){
	if(height((*root)->left)-height((*root)->right)==2 && height((*root)->left->left)-height((*root)->left->right)>=0){
		rightRotation(root);


	} 

	if(height((*root)->left)-height((*root)->right)==2 && height((*root)->left->left)-height((*root)->left->right)==-1){
		leftRotation(&((*root)->left));
		rightRotation(root);
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

int height(struct Node *root){
	if(!root) return 0; 
	int lHeight=height(root->left);
	int rHeight=height(root->right);
	return (lHeight>rHeight)? lHeight+1:rHeight+1;
}


int preorder(struct Node *root){
	if(!root)
		return 0;
	cout<<root->data<<' ';
	preorder(root->left);	
	preorder(root->right);
	return 1;

}


void deleteNode(struct Node **root, int key){
	if(!root) return;
	else if(key<(*root)->data){
		deleteNode(&((*root)->left), key);
		restoreRightSubtree(root);
	}
 
	else if(key>(*root)->data){
		deleteNode(&((*root)->left), key);
		restoreLeftSubtree(root);	
}

	else{
		
		if(!(*root)->left){
			struct Node *temp=*root;
			*root=(*root)->right;
			delete temp;
		}

		else if(!(*root)->right){
			struct Node *temp=*root;
			*root=(*root)->left;
			delete temp;
		}

		else{

			int data=findLeast((*root)->right);
			(*root)->data=data;
			deleteNode(&((*root)->right), data);
		}
	
	
	} 

}


int findLeast(struct Node *root){
	if(!root->left && !root->right) return root->data;
	return findLeast(root->left);  

}







