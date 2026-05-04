#include <stdio.h>
typedef enum { DOT = 3, LEFT = 3, RIGHT = 88, CENTER } MYTYPE;

int main(void) {
    MYTYPE face1 = RIGHT;
    MYTYPE face2 = CENTER;

    printf("%d\n", face1);
    printf("%d\n", face2);

    return 0;
}
