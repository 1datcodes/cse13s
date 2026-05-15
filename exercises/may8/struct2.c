#include <stdio.h>

// typedef struct {
//     double x;
//     double y;
// } Coord;
struct coord { // "struct coord" is a tag for the struct
    double x;
    double y;
};

struct coord sub(struct coord p1, struct coord p2) {
    struct coord d = { p2.x - p1.x, p2.y - p1.y };
    return d;
}

double area(struct coord p1, struct coord p2, struct coord p3) {
    struct coord d1 = sub(p2, p1);
    struct coord d2 = sub(p3, p1);
    return 0.5 * (d1.x * d2.y - d2.x * d1.y);
}

int main(void) {
    struct coord p1 = {1, 1};
    struct coord p2 = {2, 1};
    struct coord p3 = {11, 3};

    printf("%f\n", area(p1, p2, p3));

    return 0;
}
