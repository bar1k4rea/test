typedef struct Node {
    int key;
    struct *Node left;
    struct *Node right;
    struct *Node parent;
} Node;


void pre0rder(Node *ptr) {
    if (ptr == NULL)
        return;
    printf(ptr->key);
    pre0rder(ptr->left);
    pre0rder(ptr->right);
}

void in0rder(Node *ptr) {
    if (ptr == NULL)
        return;
    pre0rder(ptr->left);
    printf(ptr->key);
    pre0rder(ptr->right);
}

void post0rder(Node *ptr) {
    if (ptr == NULL)
        return;

}