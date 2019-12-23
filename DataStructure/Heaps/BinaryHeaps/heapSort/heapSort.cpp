int left(int i){
	return 2*i+1;
}

int right(int i){
	return 2*i+2;
}

int parent(int i){
	return (i-1)/2;
}

int swap(int arr[], int i, int j){
	arr[i]=arr[i]^arr[j];
	arr[j]=arr[i]^arr[j];
	arr[i]=arr[i]^arr[j];
	return 1;
}

int maxHeapify(int arr[], int i, int n){
	int l=left(i);
	int r=right(i);
	int largest=i;
	if(l<n && arr[l]>arr[largest]) largest=l;
	if(r<n && arr[r]>arr[largest]) largest=r;
	if(largest!=i){
		swap(arr, i, largest);
		maxHeapify(arr, largest, n);    	
	}
	return 1;
}

int buildMaxHeap(int arr[], int n){

	for(int i=(n-1)/2;i>=0;i--){
		maxHeapify(arr, i, n);
	}
	return 1;
}



int heapSort(int arr[], int n){
	buildMaxHeap(arr, n);
	int size=n;
	while(size>1){
		swap(arr, 0, size-1);
		size--;
		maxHeapify(arr, 0, size);	
	}

	return 1;
}




