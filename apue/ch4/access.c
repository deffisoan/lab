#include "../apue.h"
#include <unistd.h>

int main() {
    if (access("ls.c", R_OK) < 0) {
        err_ret("can't read");
    } else {
        printf("open ok\n");
    }
}