#include "../include/header.h"

int base_id(char *fmt){

    switch(*fmt){
        case 'd':
            return DECIMAL;
        break;
        case 'o':
            return OCTAL;
        break;
        case 'u':
            return DECIMAL;
        break;
        case 'x':
            return HEXADECIMAL;
        break;
    }
    return 0;
}