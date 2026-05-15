/*
 * Node data type
 */
typedef struct s_node Node;

struct s_node {
    int i;
    char ch;
    Node *next;
    //   ^^^^ --> *next is a Node (deferencing will result in a Node type)
    //   Therefore next will be a pointer to a Node
};
