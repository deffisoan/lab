#include "../apue.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>

int main() {
    typedef struct stat stat;
    int file = open("ls.c", O_RDONLY);
    stat file_sturct;
    fstat(file, &file_sturct);
    printf("file has mode: %u, size: %lld, uid: %u\n", file_sturct.st_mode,
                                                       file_sturct.st_size,
                                                       file_sturct.st_uid);
}