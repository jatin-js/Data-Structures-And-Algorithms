int hashF(int hashT[], int d){
	int i=0;	
	int index=d%10;
	
	while(hashT[(d+i*(7-d%7))%10]!=0){
		i++;
		if((d+i*(7-d%7))%10==index) return -1;  //10 not inserted because of secondary clustering.(Need to change the size of table)
	}
	return (d+i*(7-d%7))%10;
}

int insert(int hashT[], int data){
	
	int pos=hashF(hashT, data);
	if(pos==-1)
		return 0;
	
		hashT[pos]=data;
		return 1;
	

}

int search(int hashT[], int key, int *pos){
	int i=0;
	int index=key%10;
	while( hashT[(key+i*(7-key%7))%10] && hashT[(key+i*(7-key%7))%10]!=key){
		i++;
		if((key+i*(7-key%7))%10==index) return 0;			// key not found.
	}
	if(hashT[(key+i*(7-key%7))%10]!=key){return 0;}
	*pos=(key+i*(7-key%7))%10;
	return 1; 
	
}

int deleteNode(int hashT[], int pos){
	hashT[pos]=INT_MIN;
	return 1;
}


