/*Example:-   $ g++ -std=c++14 temp.cpp*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <climits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <unordered_map>

using namespace std;

int* Lps(char *pat){
    int m = strlen(pat);
    static int lps[1000];
    int i = 1;
    lps[0] = 0;
    int j = 0;
    while(i<m){
        if(pat[i]==pat[j]){
            lps[i] = j+1;
            i++;
            j++;
        }
        else{
            if(j){ 
                j = lps[j-1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

void kmp(char *txt, char *pat){
    int *lps = Lps(pat);
    int n = strlen(txt);
    int m = strlen(pat);
    int i = 0, j = 0;
    while(i<n){
        if(txt[i]==pat[j]){
            i++;
            j++;
        }else{
            if(j)
                j = lps[j-1];
            else
                i++;            
        }
        if(j==m){
            cout<<i-m<<'\n';
            j = lps[j-1];
        }

    }  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    char txt[] = "ABABDABACDABABCABABCABAB"; 
    char pat[] = "ABABCABAB"; 
    kmp(txt, pat);
}