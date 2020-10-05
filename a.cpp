#include<iostream>

using namespace std;

int check(string str, int i, int j){
    while(i<=j && str[i]==str[j]){i++;j--;};
    if(i>j)return 1;
    return 0;

    
}
int main() {
 ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    string str;
    cin>>str;
    int i, j, min, max;
    int n = str.length();
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(check(str, i, j)){
                if(j-i+1>max-min+1){
                    min = i;
                    max=j;
                }
            }
        }
    }
    for(i=min;i<=max;i++)cout<<str[i]<<' ';

}