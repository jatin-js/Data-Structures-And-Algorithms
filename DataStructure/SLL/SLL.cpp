int isEmpty(struct Node *head){
	if(!head)
		return 1;
	return 0;
}

int insertNode(struct Node **head, int data, struct Node *pred){
	struct Node *newNode=new struct Node;
	if(!newNode)
		return 0;
	newNode->data=data;
	if(!pred){
		newNode->next=*head;
		*head=newNode;
	}
	else{
		newNode->next=pred->next;
		pred->next=newNode;
	}
	return 1;
}

int deleteNode(struct Node **head, int *data, struct Node *pred){
	struct Node *temp;	
	if(isEmpty(*head))
		return 0;
	
	if(!pred){
		*data=(*head)->data;
		temp=*head;
		*head=(*head)->next;
	}
	else{	*data=pred->next->data;
		temp=pred->next;
		pred->next=pred->next->next;
	}	
	delete temp;
	
	return 1;
}

int searchNode(struct Node *head, int key, struct Node **pred){
	struct Node *temp1=head;
	*pred=NULL;
	while(temp1 && key!=temp1->data){
		*pred=temp1;
		temp1=temp1->next;
	}
	if(!temp1){
		*pred=NULL;
		return 0;
	}
	return 1;
}


int traverse(struct Node *head){
	if(isEmpty(head))		
		return 0;
	struct Node *temp=head;
	while(temp){
		cout<<temp->data<<' ';
		temp=temp->next;
	}
	return 1;
}

int length(struct Node *head, int *len){	
	*len=0;
	if(isEmpty(head))
		return 0;
	struct Node *temp=head;
	while(temp){
		(*len)++;
		temp=temp->next;
	}
	return 1;
}

int destroyList(struct Node **head){
	if(isEmpty(*head))
		return 0;
	int data;

	while(*head){
		deleteNode(head, &data, NULL);
	}
	return 0;
}

int reverseList(struct Node **head){
	if(isEmpty(*head))
		return 0;
	struct Node *p1, *p2, *p3;
	p1=NULL;p2=*head;p3=p2->next;
	while(p2){
		p2->next=p1;
		p1=p2;
		p2=p3;
		p3=(!p3)? NULL:p3->next;
	}
	*head=p1;
	return 1;
}	



int loopLength(struct Node *head){
	if(isEmpty(head))
		return 0;
	struct Node *p1,*p2;
	p1=p2=head;
	while(p2 && p2->next){
		p1=p1->next;
		p2=p2->next->next;
		if(p1==p2)
			break;
	}
	if(p1==p2){
		cout<<"Loop detected";
		int i=0;
		do{
			i++;
			p2=p2->next;
		}while(p1!=p2);
		cout<<"Length of loop="<<i;
		return 1;
	}
	return 0;
}

int middleTerm(struct Node *head, struct Node **ptr){
	if(isEmpty(head))
		return 0;
	struct Node *temp1, *temp2;
	temp1=temp2=head;
	while(temp2 && temp2->next){
		temp2=temp2->next->next;
		temp1=temp1->next;
	}
	if(temp2)
		*ptr=temp1->next;
	else
		*ptr=temp1;		
	return 1;
}

int compareLists(struct Node *head1, struct Node *head2){
	struct Node *temp1=head1;
	struct Node *temp2=head2;	
	while(temp1 && temp2 && temp1->data==temp2->data){
		temp1=temp1->next;
		temp2=temp2->next;
	}
	if(!temp1 && !temp2)
		return 1;
	return 0;
}


int palindrome(struct Node *head){
	if(isEmpty(head))
		return 0;
	struct Node *ptr=NULL;
	struct Node *temp1, *temp2, *midnode=NULL, *pretemp1;
	temp1=temp2=head;
	while(temp2 && temp2->next){
		temp2=temp2->next->next;
		pretemp1=temp1;
		temp1=temp1->next;
	}
	if(temp2){
		midnode=temp1;
		temp1=temp1->next;
	}
	pretemp1->next=NULL;
	reverseList(&temp1);
	int res=compareLists(head, temp1);
	reverseList(&temp1);
	if(midnode){
		pretemp1->next=midnode;
		midnode->next=temp1;
	}
	else
		pretemp1->next=temp1;
	return res;
}


int recPalindrome(struct Node **left, struct Node *right){
	if(!right)
		return 1;
	int i=recPalindrome(left, right->next);
	if(!i)
		return 0;	
	int j=((*left)->data==right->data);
	*left=(*left)->next;
	return j;		
}

int removeDuplicatesSortedList(struct Node **head){
	if(isEmpty(*head))	
		return 0;
	struct Node *temp1=*head, *temp2;
	while(temp1->next){
		if(temp1->data==temp1->next->data){
			temp2=temp1->next;
			temp1->next=temp1->next->next;
			delete temp2;
		}
		else
			temp1=temp1->next;
	}
	return 1;
}
			

int removeDuplicatesUnsortedList(struct Node **head){
	if(isEmpty(*head))
		return 0;
	int data;
	struct Node *head2=new struct Node;
	struct Node *pred,*temp1=*head, *temp2=NULL;
	if(!head2)
		return 0;
	while(temp1){
		if(searchNode(head2, temp1->data, &pred))
			
			deleteNode(head, &data, temp2);
		else{
			insertNode(&head2, temp1->data, NULL);
			temp2=temp1;					
			
		}
		temp1=temp1->next;	
		
	}
	destroyList(&head2);
	return 1;
}	


int swapNodes(struct Node **head, int key1, int key2){
	if(isEmpty(*head))
		return 0;
	struct Node *pred1=NULL,*pred2=NULL,*temp1,*temp2;
	if(searchNode(*head, key1, &pred1) && searchNode(*head, key2, &pred2)){ 
	      	temp1=pred1->next;
		temp2=pred2->next;
		if(pred1!=NULL)
			pred1->next=temp2;
		else
			*head=temp2;
		if(pred2!=NULL)
			pred2->next=temp1;
		else
			*head=temp1;
		struct Node *temp=temp1->next;
		temp1->next=temp2->next;
		temp2->next=temp;		
	}
	return 1;
}

int pairwiseSwap(struct Node **head){
	if(isEmpty(*head))	 			
		return 0;
	struct Node *temp=*head;
	int t;	
	while(temp && temp->next){		
		t=temp->data;
		temp->data=temp->next->data;
		temp->next->data=t;
		temp=temp->next->next;
	}
	return 1;
}

int intersectionNode(struct Node *head1, struct Node *head2){
	if(isEmpty(head1) || isEmpty(head2))
		return 0;
	int l1,l2,i;
	struct Node *temp1,*temp2;
	length(head1, &l1);
	length(head2, &l2);
	int d=abs(l1-l2);
	if(l1>l2){
		temp1=head1;
		temp2=head2;
	}
	else{
		temp1=head2;
		temp2=head1;
	}
	for(i=0;i<=d;i++)
		temp1=temp1->next;	
	temp2=temp2->next;
	while(temp1 && temp2 && temp1->data!=temp2->data){	
		temp1=temp1->next;	
		temp2=temp2->next;
	}
	if(temp1 && temp2 && temp1->data==temp2->data){
		cout<<"Intersection point data "<<temp1->data<<endl;
		return 1;
	}
	else
		return 0;
}


















			








