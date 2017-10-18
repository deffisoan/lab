#include "../apue.h"
#include <time.h>

int main() {
    time_t* t_time;
    time(t_time);
    printf("%ld \n", *t_time);
}