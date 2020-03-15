struct Node* insertNode(struct Node *root, struct Node *ptr){
	if(!root){
		return ptr;
		 
	} 
	

	if(ptr->data>root->data){
		 root->right=insertNode(root->right, ptr);
		root=restoreRightSubtree(root);				
	}

	else if(ptr->data<root->data){
		root->left=insertNode(root->left, ptr);
		root=restoreLeftSubtree(root);				

	} 
	 return root; 
	
}

struct Node* restoreRightSubtree(struct Node *root){
	if(height(root->left)-height(root->right)==-2 && height(root->right->left)-height(root->right->right)>=-1){
		root= leftRotation(root);


	} 

	if(height(root->left)-height(root->right)==-2 && height(root->right->left)-height(root->right->right)<=1){
		root->right=rightRotation(root->right);
		root= leftRotation(root);
	} 

	return root;

}

struct Node* restoreLeftSubtree(struct Node *root){
	if(height(root->left)-height(root->right)==2 && height(root->left->left)-height(root->left->right)<=1){
		root= rightRotation(root);


	} 

	if(height(root->left)-height(root->right)==2 && height(root->left->left)-height(root->left->right)>=-1){
		root->left=leftRotation(root->left);
		root= rightRotation(root);
	} 

	return root;


}


struct Node* leftRotation(struct Node *root){
	struct Node* temp=root->right;
	root->right=temp->left;
	temp->left=root;
	return temp;
}


struct Node* rightRotation(struct Node *root){
	struct Node* temp=root->left;
	root->left=temp->right;
	temp->right=root;
	return temp;
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


struct Node* deleteNode(struct Node *root, int key){
	if(!root) return NULL;
	else if(key<root->data){
		root->left=deleteNode(root->left, key);
		root= restoreRightSubtree(root);
	}
 
	else if(key>root->data){
		root->right=deleteNode(root->left, key);
		root=restoreLeftSubtree(root);	
}

	else{
		
		if(!root->left){
			struct Node *temp=root;
			root=root->right;
			delete temp;			


			
		}

		else if(!root->right){
			struct Node *temp=root;
			root=root->left;
			delete temp;

		}

		else{

			int data=findLeast(root->right);
			root->data=data;
			root=deleteNode(root->right, data);

		}
	
	
	} 
	return root;

}


int findLeast(struct Node *root){
	if(!root->left && !root->right) return root->data;
	return findLeast(root->left);  

}







