#include "../include/header.h"
//write() individual va_arg & fmt char
int my_putchar(char c) {
return write(1,&c,1);
}