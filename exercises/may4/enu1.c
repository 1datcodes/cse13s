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
enum { DOT, LEFT, RIGHT, CENTER } face;

int main(void) {
    face = RIGHT;

    printf("%d\n", face);

    return 0;
}
