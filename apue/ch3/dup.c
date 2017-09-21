#include "../apue.h"
#include <unistd.h>
#include <fcntl.h>

int main() {
    int j, k;
    char *file = "open.c";
    j = open(file, O_RDONLY);
    if ((k = dup(j)) < 0) {
        fprintf(stderr, "error\n");
        exit(127);
    } 
    printf("success, fd is %d, new fd is %d\n", j, k);
}