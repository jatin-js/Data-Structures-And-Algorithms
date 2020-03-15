struct trieNode{
	int c;
	struct trieNode* ptr[26];
 	bool flag;
};

int insert(struct trieNode**, char *str);
int search(struct trieNode*, char *str);

