#include "../include/header.h"
#include <stdarg.h>

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
                    my_putint(i, ap, p, base_id(fmt));
                break;
                case 'o':
                case 'u':
                case 'x':
                    my_putuint(u, ap, p, base_id(fmt));
                break;
            }
}