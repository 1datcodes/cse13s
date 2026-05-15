#include "node.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    Node node1, node2, node3;

    node1.i = 1;
    node1.ch = 'A';
    node1.next = &node2;

    node2.i = 2;
    node2.ch = 'B';
    node2.next = &node3;

    node3.i = 3;
    node3.ch = 'B';
    node3.next = NULL;

    Node *list;
    list = &node1;

    Node *p = list;

    while (p != NULL) {
        // p.ch will NOT work since p is an address
        // (*p).ch will work since * dereferences the pointer
        // -> is equivalent to (*).
        if (p->ch == 'Q') {
            printf("i is %d\n", p->i);
            break;
        }

        // didn't find the node
        p = p->next;
    }


    return 0;
}
