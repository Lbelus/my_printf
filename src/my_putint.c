#include "../include/header.h"


void my_putint(int i, va_list ap, char *p, int base){
    
    i = va_arg(ap, int);
    p = malloc(sizeof(*p)*my_strlen(p));
    their_itoa(i, p, base);
    my_putstr(p);
    free(p);
}