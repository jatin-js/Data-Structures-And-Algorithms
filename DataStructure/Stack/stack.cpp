int isEmpty(struct Node *top){
	if(!top)
		return 1;
	return 0;
}

int push(struct Node **top, int data){
	struct Node *newNode=new struct Node;
	if(!newNode)
		return 0;
	newNode->data=data;
	newNode->next=*top;
	*top=newNode;
	return 0;
}

int pop(struct Node **top, int *data){
	if(isEmpty(*top))
		return 0;
	*data=(*top)->data;
	struct Node *temp=*top;
	*top=(*top)->next;
	delete temp;
	return 1;
}
		
int peek(struct Node *top, int *data){
	if(isEmpty(top)) 
		return 0;
	*data=top->data;
	return 1;
}

int traverse(struct Node *top){
	if(isEmpty(top))
		return 0;
	struct Node *temp=top;
	while(temp){
		cout<<temp->data<<' ';
		temp=temp->next;
	}
	return 1;
}
	
	
	
