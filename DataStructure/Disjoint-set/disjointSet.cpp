int merge(int a[], int i, int j){
	if(a[i]<=a[j]) {
		a[i]+=a[j];
		a[j]=i;	
	}
	else {
		a[j]+=a[i];
		a[i]=j;
	}
	return 1;
}

int findSet(int a[], int i){
	int t=i;	
	while(a[t]>0){
		t=a[t];
	}
	int j;
	while(a[i]>0){
		j=a[i];		
		a[i]=t;
		i=j;
	}	
	

	return i;
}

int findSetRec(int a[], int i){
	if(a[i]<0) return i;
	a[i]=findSet(a, a[i]);
	return a[i];
}
