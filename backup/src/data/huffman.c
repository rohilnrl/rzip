#include "data.h"

#define BASE '\a'

/* makes huffman tree based on frequency data */
Tree *make(Freq *arr[])
{
    Node *root = create(BASE, -1);
    Tree *bin = createtree(root);

    int i;
    for (i = 0; arr[i]->c != '\0'; i++) {
        root->letter = BASE;
        root->value = -1;
        root->left = create(arr[i]->c, arr[i]->val);
        root = root->right;
    }

    return bin;
}
