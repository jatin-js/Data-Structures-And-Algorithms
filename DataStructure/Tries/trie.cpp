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

int search(struct trieNode* root, char *str){
	if(!root) return 0;
	int i=0;		
	while(*(str+i) && root){
		if(!root->ptr[*(str+i)-'a']) return 0;

		root=root->ptr[*(str+i)-'a'];	
		i++;
	}
	if(!root || root->flag!=true) return 0;
	else return 1; 	
}

int check(struct trieNode*root){
	for(int i=0;i<26 && !root->ptr[i];i++)
	if(i==26) return 1;
	return 0;
}

int deleteString(struct trieNode** root, char* str){
	if(!*root) return 0;
	if(!*str)  { 
		if((*root)->flag==true){
			if(check(*root)){ delete *root; *root=NULL;return 1;}
			(*root)->flag=false;
			return 2;
		}
		else return 0;

	}
	int r=deleteString(&((*root)->ptr[*str-'a']), str+1);
	if(!r)return 0;
	else if(r==2) return 2; 


	if(check(*root) && (*root)->flag!=true){
		delete *root; *root=NULL;
		return 1;
	}
	return 2;
}
	
