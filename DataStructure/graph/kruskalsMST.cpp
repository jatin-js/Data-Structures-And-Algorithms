#include<limits.h>
using namespace std;
#include<iostream>
int findSet(int set[], int i){
    if(set[i]<0) return i;
    set[i]=findSet(set, set[i]);
    return set[i];
    
}

void Union(int set[], int s1, int s2){
    if(set[s1]<set[s2]){
        set[s1]+=set[s2];
        set[s2]=s1;
    }
    else{
        set[s2]+=set[s1];
        set[s1]=s2;
    }
}

int main(){ 
    int edges[][9]={{1, 1, 2, 5, 6, 4, 5, 3, 2},
                    {6, 2, 7, 7, 5, 7, 4, 4, 3},
                    {5,25,10,18,20,14,16, 8,12}};
    int e=9;
    int n=7; 
    int included[9]={0};
    int set[8]={-1,-1,-1,-1,-1,-1,-1,-1};
    int t[2][6];
    int i=0,j,min,u,v,k;                    // k is for storing edge of minimum cost
                                            // u and v are for vertices having min cost edge
    while(i<n-1){
        min=INT_MAX;    
        for(j=0;j<e;j++){
            if(!included[j]){
                if(edges[2][j]<min){
                    min=edges[2][j];
                    k=j;
                    u=edges[0][j]; v=edges[1][j];                
                }
            }
        }
        if(findSet(set, u)!=findSet(set, v)){
             t[0][i]=u; t[1][i]=v;
             Union(set, findSet(set, u), findSet(set, v));
             i++;
        }
        included[k]=1;
    }
    
    for(i=0;i<n-1;i++){
        cout<<t[0][i]<<" -> "<<t[1][i]<<endl;
    }
      
    return 0;
    
} 
    
    
    
