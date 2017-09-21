#include "../apue.h"
#include <unistd.h>
#include <fcntl.h>

int main() {
    int j, k;
    char *file = "open.c";
    j = open(file, O_RDWR);
    if ((k = dup2(j, 999)) >= 0) {
        printf("success.fd1:%d\tfd2:%d\n", j, k);
    } else{
        fprintf(stderr, "error.\n");
        exit(127);
    }
}