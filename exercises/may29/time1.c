#include <stdio.h>
#include <time.h>

int main(void) {
    time_t current_time = time(0);
    printf("current_time is %d\n", (int) current_time);
    printf("sizeof time_t is %d, sizeof int is %d\n", (int) sizeof(time_t), (int) sizeof(int));

    return 0;
}
