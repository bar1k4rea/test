typedef struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    struct Node *parent;
} Node;


void pre0rder(Node *ptr) {
    if (ptr == NULL)
        return;
    printf("%d\n", ptr->key);
    pre0rder(ptr->left);
    pre0rder(ptr->right);
}

void in0rder(Node *ptr) {
    if (ptr == NULL)
        return;
    pre0rder(ptr->left);
    printf("%d\n", ptr->key);
    pre0rder(ptr->right);
}

void post0rder(Node *ptr) {
    if (ptr == NULL)
        return;
    post0rder(ptr->left);
    post0rder(ptr->right);
    printf("%d\n", ptr->key);
}

Node* findNode(Node *ptr, int key) {
    while (ptr) {
        if (key < ptr->key) {
            ptr = ptr->left;
            continue;
        }
        else if (key > ptr->key) {
            ptr = ptr->right;
            continue;
        }
        else
            return ptr;
    }
    return NULL;
}

Node* findMin(Node *ptr) {
    if (ptr == NULL)
        return NULL;
    while (ptr->left)
        ptr = ptr->left;
    return ptr;
}

Node* findMax(Node *ptr) {
    if (ptr == NULL)
        return NULL;
    while (ptr->right)
        ptr = ptr->right;
    return ptr;
}
