#include <stdlib.h>
#include <stdio.h>

/* node of the Huffman tree */
typedef struct node {
    unsigned int value;
    char letter;
    struct node *left;
    struct node *right;
} Node;

/* binary tree for encoding traversal */
typedef struct tree {
    Node *root;
} Tree;

typedef struct freq {
    char c;
    unsigned int val;
} Freq;

void print(Node *);
Tree *make();
Node *create(char, int);
Tree *createtree(Node *);
Freq *addf(char, int);
