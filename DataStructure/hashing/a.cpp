#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s1,s2;
getline(cin, s1);
getline(cin, s2);
cout<<s1.compare(s2);
return 0;
}
