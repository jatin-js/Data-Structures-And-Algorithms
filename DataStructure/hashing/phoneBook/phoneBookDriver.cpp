#include<iostream>
using namespace std;

struct Node{
	string name, sex, fatherName, phoneNo, citizenNo, email, address;
 	struct Node* next;
 	
};

int hashF(int);
int addContact(struct Node** hashT);
int getInfo(struct Node* temp);
int showList(struct Node** hashT);
int update(struct Node** hashT, struct Node* temp);
struct Node* search(struct Node** hashT, string name);
void displayInfo(struct Node* temp);
int deleteContact(struct Node** hashT, string name);


int main(){

    int choice, i; 
    string dummy;
    string name;
    
    struct Node **hashT=new struct Node*[26], *temp;
    for(i=0;i<26;i++)
        hashT[i]=NULL; 
    while(i){
        cout<<"Press key:"<<endl;
        cout<<"1. Add Contact"<<endl;
        cout<<"2. Show List "<<endl;
        cout<<"3. Update Contact "<<endl;
        cout<<"4. Search "<<endl;
        cout<<"5. Delete Contact "<<endl;
        cout<<"6. Exit"<<endl;
        cin>>choice;
        getline(cin, dummy);
        switch(choice){

            case 1:addContact(hashT);
                    break;
            case 2:showList(hashT);
                    break;
            case 3:cout<<"Enter name: ";
                    getline(cin, name);
                    temp=search(hashT, name);
                    if(temp){          
                        update(hashT, temp);
                        cout<<"Updated"<<endl<<endl;
                    }
                    else cout<<"Wrong input"<<endl<<endl;    
                    break;
            case 4:cout<<"Enter Name: ";
                    getline(cin, name);
                    temp=search(hashT, name);
                    if(temp){
                        cout<<"Found"<<endl<<endl;
                        displayInfo(temp); 
                        cout<<endl<<endl;  
                    }
                    else cout<<"Wrong input"<<endl<<endl;
            break;
            case 5:cout<<"Enter name: ";
                    getline(cin, name);
                    if(!deleteContact(hashT, name)) cout<<"Wrong input"<<endl<<endl;
                    else cout<<"Deleted"<<endl<<endl;
                    break;
            case 6:i=0;
                    break;
            default:cout<<"Wrong input"<<endl;            
        
        }
        
    }
    
    
    
    
    return 0;
}

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
        int i;
        cout<<"Name: "; 	    
 	    getline(cin, temp->name);
 	    
        a:
    	cout<<"Sex: ";
 	    getline(cin, temp->sex);        
        if(temp->sex!="male" && temp->sex!="female" && temp->sex!="stransgender"){cout<<"Wrong sex"<<endl; goto a;}
 	  
 	    cout<<"Father's name: ";
 	    getline(cin, temp->fatherName);
 	   
 	    b:
 	    cout<<"Phone No.: ";
 	    getline(cin, temp->phoneNo);
        for(i=0;i<temp->phoneNo.length();i++){
            if(!isdigit(temp->phoneNo[i]))break;
        }
        if(i!=10){cout<<"Wrong phone no."<<endl; goto b;}
 	    
 	    c:
 	    cout<<"Citzen No.: ";
 	   	getline(cin, temp->citizenNo);
 	   	for(i=0;i<temp->citizenNo.length();i++){
        if(!isdigit(temp->phoneNo[i])){cout<<"Wrong Citizen No."; goto c;}
 	    }
 	    
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
 	   int i;
 	     b:
 	    cout<<"Phone No.: ";
 	    getline(cin, temp->phoneNo);
        for(i=0;i<temp->phoneNo.length();i++){
            if(!isdigit(temp->phoneNo[i]))break;
        }
        if(i!=10){cout<<"Wrong phone no."<<endl; goto b;}
 	    
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
   
    cout<<"Name: "<<temp->name<<endl<<"Sex: "<<temp->sex<<endl<<"Father's name: "<<temp->fatherName<<endl<<"Phone no.: "<<temp->phoneNo<<endl<<"Citizen no.: "<<temp->citizenNo<<endl<<"Email id: "<<temp->email<<endl<<"Address: "<<temp->address<<endl;
    
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



