#include <stdio.h>

double aread(double x0, double y0, double x1, double y1, double x2, double y2) {
    double dx1 = x1 - x0;
    double dy1 = y1 - y0;
    double dx2 = x2 - x0;
    double dy2 = y2 - y0;
    return 0.5 * (dx1 * dy2 - dx2 * dy1);
}

typedef struct {
    double x;
    double y;
} Coord;

Coord sub(Coord p1, Coord p2) {
    Coord d = { p2.x - p1.x, p2.y - p1.y };
    return d;
}

double area(Coord p1, Coord p2, Coord p3) {
    Coord d1 = sub(p2, p1);
    Coord d2 = sub(p3, p1);
    return 0.5 * (d1.x * d2.y - d2.x * d1.y);
}

int main(void) {
    Coord p1 = {1, 1};
    Coord p2 = {2, 1};
    Coord p3 = {11, 3};

    printf("%f\n", area(p1, p2, p3));

    return 0;
}
