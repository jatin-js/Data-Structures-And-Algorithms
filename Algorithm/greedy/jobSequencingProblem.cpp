#include<iostream>
using namespace std;

struct jobs{
    
    int id;
    int dl;
    int p;
    
    void assign(){
        cin>>id>>dl>>p;
    }
};

int merge(struct jobs* arr, int l, int mid, int h){
	int i=l,j=mid+1, k=0;
	struct jobs* b=new struct jobs[h-l+1];	
	while(i<=mid && j<=h){
		if(arr[i].p>=arr[j].p)b[k++]=arr[i++];
		else b[k++]=arr[j++];
	}
	while(i<=mid){b[k++]=arr[i++];}
	while(j<=h){b[k++]=arr[j++];}
	k=0;
	for(int i=l;i<=h;i++){
		arr[i]=b[k++];	
	}
	
	delete b;
	
	return 1;
}

int mergeSort(struct jobs *arr, int l, int h){
	if(l==h) return 0;
	int mid=(l+h)/2;
	mergeSort(arr, l, mid);
	mergeSort(arr, mid+1, h);
	merge(arr, l, mid, h);
	return 1;
}



void sort(struct jobs *arr, int n){
    mergeSort(arr, 0,n-1);
}

int maxDL(struct jobs* arr, int n){
    int max=arr[0].dl;
    for(int i=1;i<n;i++){
        if(arr[i].dl>max)max=arr[i].dl;
    }
    return max;
}

int main(){
	int T,i,n,j,maxdl,N,val,k;
	cin>>T;
	for(i=0;i<T;i++){
	    cin>>n;
	    struct jobs *arr=new struct jobs[n];
	 N=0;val=0;
	    for(j=0;j<n;j++){
	       arr[j].assign(); 
	    }
	    
	    sort(arr, n);
	     maxdl=maxDL(arr,n);
	    int *sJobs=new int[maxdl]{0};
	    for(j=0;j<n;j++){
	            for(k=arr[j].dl-1;k>=0 && sJobs[k]!=0;k--);
	            if(k>=0){ N++;
	                val+=arr[j].p;   
	                sJobs[k]=1;
	            }
	        }
	        cout<<N<<' '<<val<<endl;
	    
	}
	return 0;
}
