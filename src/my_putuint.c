#include "../include/header.h"

void my_putuint(unsigned int u, va_list ap, char *p, int base){
    u = va_arg(ap, unsigned int);
    u = wrap_arround(u);
    p = malloc(sizeof(*p)*my_strlen(p));
    unsigned_itoa(u, p, base); //unsigned ITOA, take higher long instead of i
    my_putstr(p);
    free(p);
}