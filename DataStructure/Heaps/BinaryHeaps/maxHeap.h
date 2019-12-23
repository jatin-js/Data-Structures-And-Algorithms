struct mHeap{
	int *harr;
	int capacity;
	int size;
	mHeap(int capacity){		
		size=0;
		this->capacity=capacity;
		harr=new int[capacity+1];
	}

};

int left(int);
int right(int);
int parent(int);
void creatHeap(struct mHeap*);
int maxHeapify(struct mHeap*,int);
int swap(struct mHeap*, int, int);
int traverse(struct mHeap*);
int buildHeap(struct mHeap*);
int insertKey(struct mHeap*, int);
int deleteKey(struct mHeap* , int);
int increaseKey(struct mHeap*, int , int);





