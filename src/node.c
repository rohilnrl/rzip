#include "data.h"

#ifndef NULL
#define NULL 0

#endif

/* create a node and dynamically allocate memory*/
Node *create(char c, int freq)
{
    Node *temp = (Node *) malloc(sizeof(Node));
    temp->letter = c;
    temp->value = freq;
    temp->left = temp->right = NULL;

    /* returns a pointer to the node */
    return temp;
}


