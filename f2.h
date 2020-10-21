#ifndef F2_H
#define F2_H

struct Node
{
    int data;
    Node *left, *right;
};

unsigned int getLeafCount(struct Node *node);

#endif