void tree_alt_free(Tree *p) {
    // ... free nodes
    free(p); // free the tree itself
}

void tree_free(Tree **p) {
    // *p is the pointer to the tree
    // p is the pointer to the pointer to the tree
    // ... free nodes
    free(*p);
    *p = NULL; // overwrite the stale pointer
}

int main(void) {
    Tree *p = tree_alloc(...);
    // ...
    tree_alt_free(p);
    // p = NULL; // 2. this is needed to stop 1. Overwrite stale pointer
    // p->left = ...; // 1. p is still pointing to some memory
    tree_free(&p);
    // p->left = ...; --> will cause segfault
}
