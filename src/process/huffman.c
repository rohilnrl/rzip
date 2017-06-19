#include "../data/data.h"
#include <stdio.h>

/* finds the nodes in the heap with the smallest frequency and swaps nodes */
void heapify(Heap *h, int i)
{
    int smallest = i;

    /* children nodes of parent index i */
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    /* find the index of min frequency */
    if (l < h->size && h->array[l]->frequency < h->array[smallest]->frequency)
        smallest = l;

    if (r < h->size && h->array[r]->frequency < h->array[smallest]->frequency)
        smallest = r;

    /* continue searching */
    if (smallest != i) {
        swap(&h->array[smallest], &h->array[i]);
        heapify(h, smallest);
    }
}

/* returns smallest node in a heap */
Node *getmin(Heap *h)
{
    /* delete the first element of the heap */
    Node *tmp = h->array[0];
    h->array[0] = h->array[h->size - 1];
    --h->size;
    
    /* find smallest node */
    heapify(h, 0);
    return tmp;
}

void insert(Heap *h, Node *n)
{
    int i = h->size - 1;
    ++h->size;
    
    while (i && n->frequency < h->array[(i - 1) / 2]->frequency) {
        h->array[i] = h->array[(i - 1) / 2];
        i = (i - 1)/ 2;
    }
    
    h->array[i] = n;
}

void buildh(Heap *h)
{
    int n = h->size - 1;
    int i;
    for (i = (n - 1) / 2; i >= 0; --i)
        heapify(h, i);
}

void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d\n", arr[i]);
}


int isleaf(Node *root)
{
    return !(root->left) && !(root->right);
}

Heap *create(char character[], int frequency[], int size)
{
    int i;
    Heap *h = newhep(size);
    
    for (i = 0; i < size; ++i)
        h->array[i] = newnod(character[i], frequency[i]);
        
    h->size = size;
    buildh(h);
    return h;
}

Node *buildtree(char character[], int frequency[], int size)
{
    Node *l, *r, *top;
    Heap *h = create(character, frequency, size);
    
    while (getsiz(h) != 1) {
        l = getmin(h);
        r = getmin(h);
        top = newnod('$', l->frequency + r->frequency);
        top->left = l;
        top->right = r;
        insert(h, top);
    }
    
    return getmin(h);
}
