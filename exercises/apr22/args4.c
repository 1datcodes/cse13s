#include <stdio.h>

/*
 * Program:     args4
 * Purpose:     Accept three arguments and print them. Print an error if
 *              the number of arguments is not 3
 *
 *              argv[0]  argv[1]  argv[2]  argv[3]
 *              ./args4    a        b        c
 */
int main(int argc, char **argv) {
    printf("argc is %d\n", argc);

    if (argc != 4) {
        printf("Error!\n");
    } else {
        for (int i = 0; i < argc; i++) {
            printf("argv[%d] is %s\n", i, argv[i]);
        }
    }

    return 0;
}
