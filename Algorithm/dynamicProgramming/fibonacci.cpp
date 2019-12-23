#include<iostream>
using namespace std;
int fibo(int);
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}

int fibo(int n){
    if(n<=1)return n;
    int *F=new int[n+1];
    F[0]=F[1]=1;
    for(int i=2;i<=n;i++){
        F[i]=F[i-1]+F[i-2];
    }
    return F[n];
}
