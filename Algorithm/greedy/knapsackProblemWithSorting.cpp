#include<iostream>
#include<iomanip>
using namespace std;

int Max(float a[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[max])max=i;
    }
    return max;
    
}
int cmp(float a[], int i, int j){
	if(a[2*i]/a[2*i+1]>=a[2*j]/a[2*j+1])
		return 1;
	return 0;
}

void merge(float a[], int l,int m,int h){
	int i=l,j=m+1,k=0;
	float *b=new float[2*(h-l+1)];
	while(i<=m && j<=h){
		if(cmp(a,i,j)){
			b[2*k]=a[2*i];
			b[2*k+1]=a[2*i+1];
			i++;k++;		
		}
		else{
			b[2*k]=a[2*j];
			b[2*k+1]=a[2*j+1];
			j++;k++;
		}
	}
	for(;i<=m;i++){
		b[2*k]=a[2*i];
		b[2*k+1]=a[2*i+1];
		k++;
	}
	for(;j<=h;j++){
		b[2*k]=a[2*j];
		b[2*k+1]=a[2*j+1];
		k++;
	}
	k=0;
	for(i=l;i<=h;i++){
		a[2*i]=b[2*k];
		a[2*i+1]=b[2*k+1];
		k++;
	}
}

void mergeSort(float a[], int l,int h){
	
	if(l<h){
		int mid=(l+h)/2;
		mergeSort(a,l,mid);
		mergeSort(a,mid+1,h);
		merge(a,l,mid,h);
	}

}

void sort(float a[], int n)
{
	mergeSort(a,0,n-1);	

}


int main(){
	int T,n,m,i,j;
	float *p,*a, val=0,w;
	cin>>T;
	for(i=0;i<T;i++){
	    cin>>n>>w;
	    val=0;
		a=new float[2*n];
		for(j=0;j<2*n;j++)cin>>a[j];

		sort(a,n);


		p=new float[n];
		for(j=0;j<n;j++) p[j]=a[2*j]/a[2*j+1];

		m=0;
	       do{
    		if(w>=a[2*m+1]){val=val+a[2*m]; w=w-a[2*m+1];}
    		else{ val=val+w*p[m]; w=0;}
		m++;


	   } while(w!=0 && m<n);
	    cout<<fixed<<setprecision(2)<<val<<endl;
	
		
		
		
	}
	return 0;
}
