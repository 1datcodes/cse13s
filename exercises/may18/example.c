#include "matrix1.h"

int main(void) {
    Matrix *mat = mat_alloc(2, 3);
    
    // ... stuff with matrix
    mat_set(mat, 0, 0, 3.14);
    mat_set(mat, 0, 1, 2.71);

    mat_print(mat);

    mat_free(&mat);
    return 0;
}
