#define BASE '\a'

/* makes huffman tree based on frequency data */
Tree *make((*Freq)[] arr)
{
    Node *root = create(BASE, -1);
    Tree *bin = createtree(root);

    int i;
    for (i = 0; arr[i]->letter != '\0'; i++) {
        root->letter = BASE;
        root->value = -1;
        root->left = create(arr[i]->letter, arr[i]->value);
        root = root->right;
    }

    return bin;
}
