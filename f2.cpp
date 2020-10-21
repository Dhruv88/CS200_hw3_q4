#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

/* Function to get the count  
of leaf nodes in a binary tree*/
unsigned int getLeafCount(struct Node *node)
{
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    else
        return getLeafCount(node->left) +
               getLeafCount(node->right);
}