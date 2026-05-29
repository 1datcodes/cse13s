#include <stdio.h>
#include <time.h>

int main(void) {
    time_t current_time = time(0);
    printf("current_time is %d\n", (int) current_time);
    printf("the time is %s\n", ctime(&current_time));

    return 0;
}
