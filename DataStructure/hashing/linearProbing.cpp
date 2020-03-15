int hashF(int hashT[], int d){
	int i=0;	
	while(hashT[(d+i)%10]!=0)
		i++;
	return (d+i)%10;
}

int insert(int hashT[], int data){
	
	int pos=hashF(hashT, data);
	hashT[pos]=data;
	return 1;
}

int search(int hashT[], int key, int *pos){
	int i=0;
	while( hashT[(key+i)%10] && hashT[(key+i)%10]!=key && i!=10){		
		i++;
	}
	if(hashT[(key+i)%6]!=key){return 0;}
	*pos=(key+i)%6;
	return 1; 
	
}

int deleteNode(int hashT[], int pos){
	hashT[pos]=INT_MIN;
	return 1;
}


