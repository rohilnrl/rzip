#include <stdio.h>
#include <stdlib.h>
#include "data.h"

/* create a node and dynamically allocate memory */
Node *newnod(char letter, unsigned int frequency)
{
    /* allocating memory */
    Node *temp = (Node *) malloc(sizeof(Node));
    
    /* assignment of values */
    temp->letter = letter;
    temp->frequency = frequency;
    
    /* empty left and right nodes */
    temp->left = temp->right = NULL;

    /* returns a pointer to the node */
    return temp;
}

/* create a heap and assign space */
Heap *newhep(unsigned int space)
{
    /* allocating memory */
    Heap *tmp = (Heap *) malloc(sizeof(Heap));
    
    /* assignment of values */
    tmp->size = 0;
    tmp->space = space;
    
    /* allocating memory to the heap array */
    tmp->array = (Node **) malloc(tmp->space * sizeof(Node));
    
    /* returns a pointer to the heap */
    return tmp;
}

/* swap two nodes */
void swap(Node **a, Node **b)
{
    Node *t = *a;
    *a = *b;
    *b = t;
}

int getsiz(Heap *h)
{
    return h->size;
}

