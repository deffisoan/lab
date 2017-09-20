#include "../apue.h"
#include <fcntl.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: open file");
    }
    int fileno = open(argv[1], O_RDONLY);
    if (fileno >= 0) {
        fprintf(stderr, "success open %s\n", argv[1]);
    } else {
        fprintf(stderr, "error\n");
    }
}