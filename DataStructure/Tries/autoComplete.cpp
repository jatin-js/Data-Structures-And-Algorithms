#include<bits/stdc++.h>
using namespace std;
struct trieNode{
	int c;
	struct trieNode* ptr[26];
 	bool flag;
};

int insert(struct trieNode**, char *str);
int search(struct trieNode*);
int autoComplete(struct trieNode *, char str[], int );


int main(){
	struct trieNode* root=NULL;
	char *str;
	int n;
	cout<<"Enter no of inputs"<<endl;
	cin>>n;
    cout<<"Enter "<<n<<" names"<<endl;
	for(int i=0;i<n;i++){
	    cin>>str;
    	insert(&root, str);
    }
	
	search(root);
	
    return 0;
}




int insert(struct trieNode** root, char *str){
	int i=0, j;	
	if(!*root){
		*root=new struct trieNode;
		if(!*root) return 0;
		(*root)->c='.';
		for(i=0;i<26;i++) (*root)->ptr[i]=NULL;
	}
	i=0;
	struct trieNode* temp=*root;
	while(*(str+i)){
		if(!temp->ptr[*(str+i)-'a']){
			temp->ptr[*(str+i)-'a']=new struct trieNode;
			if(!temp->ptr[*(str+i)-'a']) return 0;
			temp->ptr[*(str+i)-'a']->c=*(str+i);
			for(j=0;j<26;j++) temp->ptr[*(str+i)-'a']->ptr[i]=NULL;
		}
		temp=temp->ptr[*(str+i)-'a'];	
		i++;
	}
	temp->flag=true;
	return 1;
}

int search(struct trieNode* root){
	if(!root) return 0;
	char str[20];
	int i=0;
	cout<<"Type to search"<<endl;
	do{
	    cin>>str[i];
	    if(root->ptr[str[i]-'a']){
	        autoComplete(root->ptr[str[i]-'a'], str, i+1);
	    }
	    else{
	        cout<<"Not found"<<endl;
	        return 0;   
	   }
	   root=root->ptr[str[i]-'a'];
	    i++;
	}while(1);
	    
	}
	
	
int autoComplete(struct trieNode *root, char str[], int j){
   for(int i=0;i<26;i++){
        if(root->ptr[i]){
        str[j]=root->ptr[i]->c;
        autoComplete(root->ptr[i], str, j+1);
        }
    }
    str[j]='\0';
    if(root->flag==true) cout<<str<<endl;
    return 1;

}	

