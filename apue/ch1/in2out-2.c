#include "../apue.h"

int main() {
    int n;
    while ((n = getc(stdin)) != EOF) {
        if (putc(n, stdout) == EOF) {
            err_sys("write error");
        }
    }
    if (ferror(stdin)) 
        err_sys("input error");
    exit(0);
}