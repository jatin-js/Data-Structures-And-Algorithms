int isEmpty(struct sNode *top){
	if(!top)
		return 1;
	return 0;
}

int push(struct sNode **top, struct Node* data){
	struct sNode *newNode=new struct sNode;
	if(!newNode)
		return 0;
	newNode->data=data;
	newNode->next=*top;
	*top=newNode;
	return 1;
}

int pop(struct sNode **top, struct Node **data){
	if(isEmpty(*top))
		return 0;
	*data=(*top)->data;
	struct sNode *temp=*top;
	*top=(*top)->next;
	delete temp;
	return 1;
}
		
int peek(struct sNode *top, struct Node **data){
	if(isEmpty(top)) 
		return 0;
	*data=top->data;
	return 1;
}

int traverse(struct sNode *top){
	if(isEmpty(top))
		return 0;
	struct sNode *temp=top;
	while(temp){
		cout<<temp->data<<' ';
		temp=temp->next;
	}
	return 1;
}
	
	
	
