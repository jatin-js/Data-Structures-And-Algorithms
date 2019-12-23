int hashF(int d){return d%10;}



int insert(struct Node* hashT[], int data){
	int pos;
	pos=hashF(data);
	struct Node* newNode=new struct Node;
	if(!newNode) return 0;
	newNode->data=data;
	newNode->next=hashT[pos];
	hashT[pos]=newNode;
	return 1;
}

int search(struct Node* hashT[], int key, struct Node** pre){
	int p=hashF(key);
	struct Node* temp=hashT[p];
	while(temp && temp->data!=key){
		*pre=temp;
		temp=temp->next;
	}
	if(!temp){*pre=NULL; return 0;}

	return 1; 
	
}

int deleteNode(struct Node*hashT[],int key, struct Node* pre){
	struct Node* temp;
	int p=hashF(key);
	if(!pre){
		temp=hashT[p];
		hashT[p]=hashT[p]->next;
	}
	else {
		temp=pre->next;
		pre->next=temp->next;
	}

	delete temp;

	return 1;
}


