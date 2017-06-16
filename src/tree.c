/* binary tree for encoding traversal */
typedef struct tree {
    Node *root;
} Tree;

/* create tree and add a root node */
Node *createtree(Node *r)
{
    Tree *temp = (Tree *) malloc(sizeof(Tree));
    temp->root = r;

    /* returns a pointer to the tree */
    return temp;
}

/* recursively prints the tree in 'prefix' notation */
void print(Node *r)
{
    if (r->left != NULL)
        print(r->left);
    if (r->right != NULL)
        printf(r->right);

    printf("%c: %d\n", r->letter, r->value);
}
