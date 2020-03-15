int isEmpty(struct listNode *top){
	if(!top)
		return 1;
	return 0;
}

int push(struct listNode **top, int data){
	struct listNode *newNode=new struct listNode;
	if(!newNode)
		return 0;
	newNode->data=data;
	newNode->next=*top;
	*top=newNode;
	return 0;
}

int pop(struct listNode **top, int *data){
	if(isEmpty(*top))
		return 0;
	*data=(*top)->data;
	struct listNode *temp=*top;
	*top=(*top)->next;
	delete temp;
	return 1;
}
		
int peek(struct listNode *top, int *data){
	if(isEmpty(top)) 
		return 0;
	*data=top->data;
	return 1;
}

int traverse(struct listNode *top){
	if(isEmpty(top))
		return 0;
	struct listNode *temp=top;
	while(temp){
		cout<<temp->data<<' ';
		temp=temp->next;
	}
	return 1;
}
	
	
	
