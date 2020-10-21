#ifndef F3_H
#define F3_H

struct Node
{
    int data;
    Node *left, *right;
};

int halfcount(struct Node *node);

#endif