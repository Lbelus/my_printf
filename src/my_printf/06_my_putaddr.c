#include "../../include/my_stdio.h"

int my_putaddr(long long x, va_list ap, char *p, int base) {
    int len = 0; 
    x = va_arg(ap, long long);
    p = malloc(sizeof(char)*my_strlen(p));
    itoa_long_long(x, p, base);
    len += my_putstr("0x");
    len += my_putstr(p);
    free(p);
    return len;
}