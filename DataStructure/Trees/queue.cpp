void init(struct Queue *q){
	q->front=q->rear=NULL;
}
	

int isEmpty(struct Queue *q){
	if(!q->front && !q->rear)
		return 1;
	return 0;
}

int enQueue(struct Queue *q, struct Node *data){
	struct node *newNode=new struct node;
	if(!newNode)
		return 0;
	newNode->data=data;
	if(!q->front && !q->rear)
		q->front=newNode;
	else
		q->rear->next=newNode;
	q->rear=newNode;	
		
	return 1;
}

int deQueue(struct Queue *q, struct Node **data){
	if(isEmpty(q))
		return 0;
	*data=q->front->data;
	if(q->front==q->rear)
		q->rear=NULL;
	struct node *temp=q->front;
	q->front=q->front->next;
	delete temp;
	return 1;
}

void destroyQueue(struct Queue *q){
	struct node *temp;	
	while(q->front){
		temp=q->front;
		q->front=q->front->next;
		delete temp;	
	}
}

















	













