#include "../include/header.h"
//write() va_arg string arg
int my_putint(int i, va_list ap, char *p, int base) {
    int len = 0;
    i = va_arg(ap, int);
    p = malloc(sizeof(char)*(my_strlen(p)+100));
    their_itoa(i, p, base);
    len += my_putstr(p);
    free(p);
    return len;
}