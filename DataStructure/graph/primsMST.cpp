#include<limits.h>
#define I INT_MAX
#include<iostream>
using namespace std;
int main(){ //     1    2   3   4   5   6   7
    int A[][8]={{I, I,  I,  I,  I,  I,  I,  I},
                {I, I,  25, I,  I,  I,  5,  I},//1
                {I, 25, I,  12, I,  I,  I,  10},//2
                {I, I,  12, I,  8,  I,  I,  I},//3
                {I, I,  I,  8,  I,  16, I,  14},//4
                {I, I,  I,  I,  16, I, 20,  18},//5
                {I, 5,  I,  I,  I,  20,  I,  I},//6
                {I, I,  10,  I, 14,  18,  I, I}};//7
    int n=7; 
    int near[8]={I,I,I,I,I,I,I,I};
    int t[2][6],u,v;
    int i,j,min=INT_MAX;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
                if(A[i][j]<min){
                    min=A[i][j];
                    u=i;v=j; 
                 }
        }        
    }
    
    t[0][0]=u; t[1][0]=v;
    near[u]=0; near[v]=0;
    
    for(i=1;i<=n;i++){
        if(near[i]){
            if(A[i][u]<A[i][v]) near[i]=u;
            else near[i]=v;
        }
    }
    
    int k;
    
    for(i=1;i<n-1;i++){
        min=I;
        for(j=1;j<=n;j++){
            if(near[j]){
                if(A[j][near[j]]<min){
                    min=A[j][near[j]];
                    k=j;
                 }
            }
        }
        t[0][i]=k; t[1][i]=near[k];
        near[k]=0;
        
        for(j=1;j<=n;j++){
            
                if(near[j] && A[j][near[j]]>A[j][k]){
                    near[j]=k;
                }    
        }
    
    }
    
    for(i=0;i<n-1;i++){
    cout<<t[0][i]<<" -> "<<t[1][i]<<endl;
    }
    
    return 0;
    }
