void init(struct Queue *q){
	q->front=q->rear=NULL;
}
	

int isEmpty(struct Queue *q){
	if(!q->front && !q->rear)
		return 1;
	return 0;
}

int enQueue(struct Queue *q, int data){
	struct Node *newNode=new struct Node;
	if(!newNode)
		return 0;
	newNode->data=data;
	newNode->next=NULL;
	if(!q->front && !q->rear)
		q->front=newNode;
	else
		q->rear->next=newNode;
	q->rear=newNode;	
		
	return 1;
}

int deQueue(struct Queue *q, int *data){
	if(isEmpty(q))
		return 0;
	*data=q->front->data;
	if(q->front==q->rear)
		q->rear=NULL;
	struct Node *temp=q->front;
	q->front=q->front->next;
	delete temp;
	return 1;
}

/*qint peekFront(struct Queue *q, int *data){
	if(isEmpty(q))
		return 0;
	*data=q->front->data;
	return 1;
}

int peekRear(struct Queue *q, int *data){
	if(isEmpty(q))
		return 0;
	*data=q->rear->data;
	return 1;
}

int traverse(struct Queue *q){
	if(isEmpty(q))
		return 0;
	struct Node *temp=q->front;
	while(temp){
		cout<<temp->data<<' ';
		temp=temp->next;
	}
	cout<<endl;
	return 1;
}

int length(struct Queue *q, int *len){
	if(isEmpty(q))
		return 0;
	*len=0;	
	struct Node *temp=q->front;
	while(temp){
		(*len)++;		
		temp=temp->next;
	}
	return 1;
}

int queueQuestion(struct Queue *q){
	int sdata,ldata,expected=1;
	struct listNode *top=NULL;
	struct Node *temp=q->front;
	while(temp){
		deQueue(q, &ldata);
		if(expected==ldata)
			expected++;
		else{
			if(isEmpty(top))
				push(&top, ldata);
			else if(!isEmpty(top) && peek(top, &sdata) && sdata<ldata)
				return 0;
			else
				push(&top, ldata);
		}
	}
	while(!isEmpty(top) && peek(top, &sdata) && sdata==expected){
		pop(&top, &sdata);
		expected++;
	}
	return 1;
}	

int firstKReverse(struct Queue *q, int k){
	if(isEmpty(q))
		return 0;
	int i=1;
	struct Node *p1,*p2,*p3;
	p1=NULL;
	p2=q->front;
	p3=q->front->next;
	while(p2 && i<=k){
		p2->next=p1;
		p1=p2;
		p2=p3;
		p3=(!p3)? NULL:p3->next;
		i++;	
	}
	q->front->next=p2;
	q->front=p1;
	return 1;
}*/





































	













