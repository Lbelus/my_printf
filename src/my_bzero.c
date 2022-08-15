#include "../include/header.h"


void my_bzero(void *s, size_t n){
    char *c = s;
    size_t i;
    for (i = 0; i < n; ++i){
        c[i] = '\0';
    }
}