#include<string>
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

