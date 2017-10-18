#include "../apue.h"
#include <pwd.h>

int main() {
    const char* name = "deffisoan";
    struct passwd* res;
    res = getpwnam(name);
    printf("%u\n", res->pw_gid);
}