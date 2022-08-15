#include "../include/header.h"

void conversion_specifier(char *fmt, va_list ap){
    int i = 0;
    unsigned int u = 0;
    char *p = 0;
    switch(*fmt){
        case 'c':
            my_putchar(va_arg(ap, int));
        break;
        case 's':
            p = va_arg(ap, char *);
            my_putstr(p);
        break;
        case 'd':
            my_putint(i, ap, p, DECIMAL);
        break;
        case 'o':
            my_putuint(u, ap, p, OCTAL);
        break;
        case 'u':
            my_putuint(u, ap, p, DECIMAL);
        break;
        case 'x':
            my_putuint(u, ap, p, HEXADECIMAL);
        break;
    }
}