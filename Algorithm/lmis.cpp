// A naive recursive implementation of
// Largest Independent Set problem
#include <iostream>
using namespace std;

// A utility function to find
// max of two integers
int max(int x, int y)
{
    return (x > y) ? x : y;
}

/* A binary tree Node has data, 
pointer to left child and a 
pointer to right child */
struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// The function returns size of the
// largest independent set in a given
// binary tree
int LISS(Node *root)
{
    if (root == NULL)
        return 0;

    // Calculate size excluding the current Node
    int size_excl = LISS(root->left) +
                    LISS(root->right);

    // Calculate size including the current Node
    int size_incl = 1;
    if (root->left)
        size_incl += LISS(root->left->left) +
                     LISS(root->left->right);
    if (root->right)
        size_incl += LISS(root->right->left) +
                     LISS(root->right->right);

    // Return the maximum of two sizes
    return max(size_incl, size_excl);
}

// A utility function to create a Node
Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int createTree(Node **root)
{
    struct Node *temp = new struct Node(0);
    *root = temp;
    temp = new struct Node(1);
    temp = new struct Node(2);
    temp = new struct Node(3);
    temp = new struct Node(1);
    temp = new struct Node(4);
    temp = new struct Node(5);
    temp = new struct Node(6);
    temp = new struct Node(7);
    temp = new struct Node(8);
    temp = new struct Node(9);
    temp = new struct Node(1);
    temp = new struct Node(1);
    temp = new struct Node(1);
    temp = new struct Node(1);
    temp = new struct Node(1);
}

// Driver Code
int main()
{
    // Let us construct the tree
    // given in the above diagram
    struct Node *root = NULL;
    createTree(&root);

    cout << "Size of the Largest"
         << " Independent Set is "
         << LISS(root);

    return 0;
}

// This is code is contributed
// by rathbhupendra
