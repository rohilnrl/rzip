/* node of the Huffman tree */
typedef struct node {
    unsigned int frequency;
    char letter;
    struct node *left;
    struct node *right;
} Node;

/* heap to make the Huffman tree */
typedef struct heap {
    unsigned int size;
    unsigned int space;
    Node **array;
} Heap;

Node *newnod(char, unsigned int);
Heap *newhep(unsigned int);
void swap(Node **, Node **);
int getsiz(Heap *);
