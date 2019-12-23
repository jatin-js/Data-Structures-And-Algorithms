int left(int i){
	return 2*i;
}

int right(int i){
	return 2*i+1;
}

int parent(int i){
	return i/2;
}

int createHeap(struct mHeap *h){
	h->harr[1]=70;
	h->harr[2]=60;
	h->harr[3]=50;
	h->harr[4]=40;
	h->harr[5]=20;
	h->harr[6]=30;
	h->harr[7]=10;
	h->size=7;
	return 1;
}

int swap(struct mHeap *h, int i, int j){
	h->harr[i]=h->harr[i]^h->harr[j];
	h->harr[j]=h->harr[i]^h->harr[j];
	h->harr[i]=h->harr[i]^h->harr[j];
	return 1;
}

int maxHeapify(struct mHeap *m, int i){
	int l=left(i);
	int r=right(i);
	int largest=i;
	if(l<=m->size && m->harr[l]>m->harr[largest])
		largest=l;
	if(r<=m->size && m->harr[r]>m->harr[largest])
		largest=r;
	if(largest!=i){
		swap(m, i, largest);
		maxHeapify(m, largest);
}
	
	return 1;
	
}

int traverse(struct mHeap *m){
	
	if(!m->size) return 0;
	for(int i=1;i<=m->size;i++){
		cout<<m->harr[i]<<' ';
	}
	cout<<endl;
	return 1;
}

int buildHeap(struct mHeap* m){
	if(!m->size) return 0;
	for(int i=(m->size)/2;i>=1;i--){
		maxHeapify(m, i);
	}
	return 1;
		
}

int increaseKey(struct mHeap* h,int i, int k){
	if(i>h->size || k<=h->harr[i]) return 0;
	while(i>1 && k>h->harr[parent(i)]){
		h->harr[i]=h->harr[parent(i)];
		i=parent(i);
	}
	h->harr[i]=k;
	return 1;
}

int extractMax(struct mHeap* h){ 
	if(!h->size) return 0;
	int max=h->harr[1];
	h->harr[1]=h->harr[h->size];
	h->size--;
	maxHeapify(h, 1);
	return  max;
}



int insertKey(struct mHeap* h, int key){
	int i;
	if(h->size==h->capacity) return 0;
	h->size++;
	//buildHeap(h); as it is already a max heap, no need to check for each element
	for(i=h->size;i>1 && key>h->harr[parent(i)];i=parent(i))// no need to put value at last and then swap with the parent
		h->harr[i]=h->harr[parent(i)];			// using technique like used in bubble sorting
	h->harr[i]=key;		
	return 1;
	
}

int deleteKey(struct mHeap* h, int i){
	if(!h->size) return 0;
	int deletedEl=h->harr[i];
	h->harr[i]=h->harr[h->size];		//correct
	h->size--;
	maxHeapify(h, i);
	return 1;
}

int deleteK(struct mHeap* h, int i){ 
	if(!h->size) return 0;
	int deletedEl=h->harr[i];
	increaseKey(h, i, INT_MAX);
	extractMax(h);
	return deletedEl;

}

int insertK(struct mHeap* h,int k){
	if(h->size==h->capacity) return 0;
	h->size++;
	increaseKey(h, h->size, INT_MAX);
	h->harr[1]=k;
	maxHeapify(h, 1);	
	return 1;
		
}





