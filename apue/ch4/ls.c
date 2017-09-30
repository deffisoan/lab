#include "../apue.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>

typedef struct stat state;

int main(int argc, char *argv[]) {
    DIR *dir;
    struct dirent *files;
    state st;

    if (argc != 2) {
        err_quit("usage ls: directory");
    }
    if ((dir = opendir(argv[1])) == NULL) {
        err_sys("can't open %s\n", argv[1]);
    } 
    while ((files = (readdir(dir))) != NULL) {
        stat(files->d_name, &st);
        printf("%s\t%u\t%lld\n", files->d_name, st.st_uid, st.st_size);
    }
}