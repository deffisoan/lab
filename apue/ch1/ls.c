#include "../apue.h"
#include <dirent.h>
int main(int argc, char *argv[]) {
    DIR *menu;
    struct dirent *dir;
    if (argc != 2) {
        err_quit("usage: ls: directory name.");
    }
    if ((menu = opendir(argv[1])) == NULL) {
        err_sys("can't open file %s", argv[1]);
    }
    while((dir = readdir(menu)) != NULL) {
        printf("%llu\t%s\t%s\n", dir ->d_ino ,dir -> d_name);
    }
}