#ifndef SDS_H
#define SDS_H
#include <stdio.h>

struct sdshdr{
    int len;
    int free;
    char buf[];
};

#endif