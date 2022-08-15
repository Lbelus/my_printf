#include "../include/header.h"

void my_putstr(char *string){
    
    int len = 0;
    while(string[len] != '\0'){
        my_putchar(string[len]);
        len++;
    }

}