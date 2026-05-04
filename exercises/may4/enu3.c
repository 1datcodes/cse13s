#include <stdio.h>

#if 0 // if 0 is true (never) run the following
/*
 * One way of defining "enumerated" constants
 * #define DOT 0;
 * #define LEFT 1;
 * #define RIGHT 2;
 * #define CENTER 3;
 */

/*
 * another way to define "enumerated" constants
 * const int DOT = 0;
 * const int LEFT = 1;
 * const int RIGHT = 2;
 * const int CENTER = 3;
 */
#endif // poor man's comment

// Easier way to define enumerated constants
// also got a variable, face
enum { DOT = 3, LEFT = 3, RIGHT = 88, CENTER } face1, face2;

int main(void) {
    face1 = RIGHT;
    face2 = CENTER;

    printf("%d\n", face1);
    printf("%d\n", face2);

    return 0;
}
