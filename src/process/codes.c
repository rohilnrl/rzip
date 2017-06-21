#include "../data/data.h"

char *codes[256];

void printcodes(Node *root, int top)
{
    if (root->l)
        (arr[top] = 0, printcodes(root->l, arr, top + 1);
        
    if (root->l)
        (arr[top] = 1, printcodes(root->r, arr, top + 1);
        
    if (isleaf(root)) {
        int i = search(root->character);
        codes[i] = arr[top];
    }
}
