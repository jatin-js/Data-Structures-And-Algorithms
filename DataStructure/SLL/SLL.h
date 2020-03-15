struct Node{
	int data;
	struct Node *next;
};

int isEmpty(struct Node *);
int isFull();
int insertNode(struct Node **, int, struct Node *);
int deleteNode(struct Node **, int &, struct Node *);
int traverse(struct Node *);
int reverseList(struct Node **);
int loopLength(struct Node *);
int middleTerm(struct Node *, struct Node **);
int compareLists(struct Node *, struct Node *);
int palindrome(struct Node *);
int recPalindrome(struct Node **, struct Node *);
int removeDuplicatesSortedList(struct Node **);
int removeDuplicatesUnsortedList(struct Node **);
int intersectionNode(struct Node *, struct Node *);
