int mergeSort(int arr[], int l, int h){
	if(l==h) return 0;
	int mid=(l+h)/2;
	mergeSort(arr, l, mid);
	mergeSort(arr, mid+1, h);
	merge(arr, l, mid, h);
	return 1;
}

int merge(int arr[], int l, int mid, int h){
	int i=l,j=mid+1, k=0;
	int b[100];	
	while(i<=mid && j<=h){
		if(arr[i]<=arr[j])b[k++]=arr[i++];
		else b[k++]=arr[j++];
	}
	while(i<=mid){b[k++]=arr[i++];}
	while(j<=h){b[k++]=arr[j++];}
	k=0;
	for(int i=l;i<=h;i++){
		arr[i]=b[k++];	
	}
	return 1;
}

void traverse(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
}
 
