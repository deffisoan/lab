#include "../apue.h"
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fileNo, n;
    char buf[MAXLINE];
    char *file = "open.c";
    fileNo = open(file, O_RDONLY);
    while ((n = pread(fileNo, buf, 10, SEEK_SET)) != 10 ) {
        printf("read success\n");
    } else {
        printf("fail\n");
    }
}