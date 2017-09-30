#include "../apue.h"
#include <sys/stat.h>

int main() {
    int j = 0;
    char *file = "ls.c";
    struct stat buf;
    stat(file, &buf);
    printf("file %s has attribute gid:%u,uid:%u\n", file, buf.st_gid, buf.st_uid);
}