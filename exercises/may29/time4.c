#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void) {
    clock_t c1 = clock();
    printf("clock() returned %ld\n", (long) c1);
    for (long i = 0; i < 1000000000L; i++) {
        // nothing
    }
    clock_t c2 = clock();
    printf("clock() returned %ld\n", (long) c2);

    double cpu_time = 1.0 * (c2 - c1) / CLOCKS_PER_SEC;

    printf("cpu time is %f seconds\n", cpu_time);
    return 0;
}
