#include "../include/header.h"

int my_printf(char *fmt,...){
    int n_ptrs = 0, i = 0; 
    unsigned int u = 0;
    char *p ;
    va_list ap;
    va_start(ap, fmt);
    
    while (*fmt){
        if(*fmt == '%'){
            fmt++;
            n_ptrs++;
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
        } else {
            my_putchar(*fmt);
        }
        fmt++;
        if(n_ptrs == MAXARGS){return EXIT_SUCCESS;}
    }
    va_end(ap);
    return EXIT_SUCCESS;
}