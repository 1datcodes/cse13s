#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void) {
    time_t start_time = time(0);
    sleep(5);
    time_t end_time = time(0);

    printf("duration is %f seconds \n", difftime(end_time, start_time));
    return 0;
}
