#include<iostream>
#include<limits.h>
using namespace std;
int main(){          //0 1 2 3 4 5 6 7 8
    int c[8][8]=/*0*/{{0,0,0,0,0,0,0,0,0},
                /*1*/ {0,0,2,1,3,0,0,0,0},
                /*2*/ {0,0,0,0,0,2,3,0,0},
                /*3*/ {0,0,0,0,0,6,7,0,0},
                /*4*/ {0,0,0,0,0,6,8,4,0},
                /*5*/ {0,0,0,0,0,0,0,0,6},
                /*6*/ {0,0,0,0,0,0,0,0,4},
                /*7*/ {0,0,0,0,0,0,0,0,5},
                /*8*/ {0,0,0,0,0,0,0,0,0}};
    int cost[9],d[9],path[9], i;
    int stages=4, min, n=8;
    cost[n]=0;
    for(i=n-1;i>=1;i--){
        min=INT_MAX;
        for(k=i+1;i<=n;i++){
            if(c[i][k]!=0 && c[i][k]+cost[k]<min){
                min=c[i][k]+cost[k];
                d[i]=k;
            }               
        }
        cost[i]=min;
    } 
    path[1]=1;p[stages]=n;
    for(i=2;i<stages;i++)path[i]=path[d[i-1]];
    

}
