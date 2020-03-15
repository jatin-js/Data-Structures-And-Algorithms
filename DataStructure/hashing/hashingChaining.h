struct Node{
	int data;
 	struct Node* next;
};

int hashF(int);
int insert(struct Node* hashT[], int);
int search(struct Node*hashT[], int, struct Node**);
int deleteNode(struct Node* hashT[],int, struct Node*);



