#include "../apue.h"
#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char* argv[]) {
    char *ptr;
    DIR  *dir;
    struct dirent* files;
    struct stat buf;
    
    if (argc != 2) {
        err_quit("usage: ls directory");
    }
    if ((dir = opendir(argv[1])) == NULL) {
        err_sys("can't open directory");
    }
    while((files = readdir(dir)) != NULL) {
        char* file = files -> d_name;
        if (lstat(file, &buf) < 0) {
            err_ret("lstat error");
            continue;
        }
        if (S_ISREG (buf.st_mode)) {
            ptr = "regular";
        } else if (S_ISDIR(buf.st_mode)) {
            ptr = "directory";
        }
        printf("%s\t%s\n", files->d_name, ptr);
    }
}