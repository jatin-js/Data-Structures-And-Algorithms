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


int main(){
	int T,n,m,i,j;
	float *p,*a, val=0,w;
	cin>>T;
	for(i=0;i<T;i++){
	    cin>>n>>w;
	    val=0;
		a=new float[2*n];
		for(j=0;j<2*n;j++)cin>>a[j];
		p=new float[n];
		for(j=0;j<n;j++) p[j]=a[2*j]/a[2*j+1];
			       m=Max(p,n);

	       do{
    		if(w>=a[2*m+1]){val=val+a[2*m]; w=w-a[2*m+1];}
    		else{ val=val+w*p[m]; w=0;}
    		p[m]=0;
    			       m=Max(p,n);

	   } while(w!=0 &&  p[m]!=0);
	    cout<<fixed<<setprecision(2)<<val<<endl;
	
		
		
		
	}
	return 0;
}
