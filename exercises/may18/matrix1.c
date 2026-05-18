#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "matrix1.h"

/*
 * a -> array of double* (column) -> array of double (row)
 */

Matrix *mat_alloc(int m, int n) {
    Matrix *mat = calloc(1, sizeof(Matrix));
    mat->m = m;
    mat->n = n;
    mat->a = calloc(m, sizeof(double *));

    for (int j = 0; j < m; j++) {
        // array and pointer can be interchanged
        mat->a[j] = calloc(n, sizeof(double));
    }

    return mat;
}

void mat_free(Matrix **pmat) {
    // Matrix *mat = *pmat; <-- can make an intermediate var for mat->a
    // free the rows
    for (int j = 0; j < (*pmat)->m; j++) {
        free((*pmat)->a[j]);
    }

    // free the column of pointers
    free((*pmat)->a);

    free(*pmat);
    *pmat = NULL;
}

/*
 * Purpose:     Set the (i, j) element of the matrix to val
 *
 * Parameters:  i -- row number from 0 to m
 *              j -- col number from 0 to n
 */

void mat_set(Matrix *mat, int i, int j, double val) {
    assert(mat != NULL);
    assert(0 <= i);
    assert(0 <= j);
    assert(i < mat->m);
    assert(j < mat->n);

    mat->a[i][j] = val;
}

void mat_print(Matrix *mat) {
    for (int i = 0; i < mat->m; i++) {
        for (int j = 0; j < mat->n; j++) {
            printf(" %f", mat->a[i][j]);
        }

        printf("\n");
    }
}
