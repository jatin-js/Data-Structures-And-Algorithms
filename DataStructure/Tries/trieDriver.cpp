#include<iostream>
#include<string.h>
#include"trie.h"
using namespace std;
#include"trie.cpp"
int main(){
	struct trieNode* root=NULL;
	char *str;
	int n;
	do{
	cout<<"press 1 to insert"<<endl;
	cout<<"press 2 to search"<<endl;
	cout<<"press 3 to delete"<<endl;
	cout<<"press 4 to exit"<<endl;
	cin>>n;
	if(n==1){
		cin>>str;	
		insert(&root,str);
	}
	else if(n==2){	
		cout<<"What to search"<<' ';
		cin>>str;
		if(search(root,str)) cout<<"found"<<endl;
		else cout<<"Not found"<<endl;

	}
	else if(n==3){
		cout<<"What to delete"<<' ';
		cin>>str;
		if(deleteString(&root, str))
			cout<<"deleted"<<endl;
		else cout<<"Not found"<<endl;
	}
	
	}while(n!=4);
	return 0;
}
