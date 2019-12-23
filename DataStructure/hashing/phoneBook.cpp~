int hashF(int d){return (d-'a');}

int addContact(struct Node** hashT){
	    
	struct Node* newNode=new struct Node;
	if(!newNode) return 0;
	getInfo(newNode);
	int pos=hashF(newNode->name[0]);
	newNode->next=hashT[pos];
	hashT[pos]=newNode;
	return 1;
}

int getInfo(struct Node* temp){
        cin.ignore();
 	    cout<<"Name: "; 	    
 	        getline(cin, temp->name);
    	cout<<"Sex: ";
 	        getline(cin, temp->sex);
 	    cout<<"Father's name: ";
 	     	getline(cin, temp->fatherName);
 	    cout<<"Phone No.: ";
 	    	getline(cin, temp->phoneNo);
 	    cout<<"Citzen No,: ";
 	   	    getline(cin, temp->citizenNo);
 	    cout<<"Email id: ";
 	  	    getline(cin, temp->email);
 	    cout<<"Address: ";
 	 	    getline(cin, temp->address);
 	 	temp->next=NULL;    
 	 	return 1;
 	
 	}

int showList(struct Node** hashT){
    struct Node* temp;
    for(int i=0;i<26;i++){
        temp=hashT[i];
        while(temp){
            displayInfo(temp);
            temp=temp->next;
        }
    }
    return 1;
}

int update(struct Node** hashT, struct Node* temp){          
 	    cout<<"Phone No.: ";
 	    	getline(cin, temp->phoneNo);
 	    cout<<"Citzen No,: ";
 	   	    getline(cin, temp->citizenNo);
 	    cout<<"Email id: ";
 	  	    getline(cin, temp->email);
 	    cout<<"Address: ";
 	 	    getline(cin, temp->address);
 	 	return 1;
    
}

struct Node* search(struct Node** hashT, string name){      
	struct Node* pre=NULL;
	int p=hashF(name[0]);
	struct Node* temp=hashT[p];
	while(temp && name.compare(temp->name)){
		temp=temp->next;
	}
	if(!temp) return NULL;   
	return temp; 
	
}

void displayInfo(struct Node* temp){
   
    cout<<"Name: "<<temp->name<<endl<<"Phone No.: "<<temp->phoneNo<<endl;
    
}

int deleteContact(struct Node** hashT, string name){
	struct Node* temp, *pre=NULL;
	int p=hashF(name[0]);
	temp=hashT[p];
	while(temp && name.compare(temp->name)){
	    pre=temp;
	    temp=temp->next;
	}
	if(!temp) return 0;
	
	else if(!pre){
		temp=hashT[p];
		hashT[p]=hashT[p]->next;
	}
	else {
		temp=pre->next;
		pre->next=temp->next;
	}

	delete temp;

	return 1;
}


