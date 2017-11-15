#include "../apue.h"
#include <wchar.h>

int main() {
    FILE* file = fopen("test.txt", "r");
    int res_one = fwide(file, 0);
    int res_two = fwide(file, 1);
    int res_three = fwide(file, -1);
    printf("%d\n%d\n%d\n", res_one, res_two, res_three);
}