typedef struct {
    int m; // Number of rows
    int n; // Number of columns
    // <-- pointer to the matrix data
    double **a; // pointer to a pointer to a double
} Matrix;

Matrix *mat_alloc(int, int);
void mat_free(Matrix **);
void mat_set(Matrix *, int, int, double);
void mat_print(Matrix *);
