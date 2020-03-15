int swap(int arr[], int i, int j){
	arr[i]=arr[i]^arr[j];
	arr[j]=arr[i]^arr[j];
	arr[i]=arr[i]^arr[j];
return 1;
}


int partition(int arr[], int l, int h){
	int pivot=arr[l];
	int i=l,j=h;
	do{
    		do{i++;}while(arr[i]<=pivot);
		do{j--;}while(arr[j]>pivot);
		if(i<j)swap(arr, i, j);
	}while(i<j);
	swap(arr, l, j);
	return j;
}

void quickSort(int arr[], int l, int h){
	int j;	
	if(l<h){
		j=partition(arr, l, h);
	quickSort(arr, l, j);
	quickSort(arr, j+1, h);
	}


}

void traverse(int arr[], int n){
	for(int i=0;i<n;i++) cout<<arr[i]<<' ';
}
