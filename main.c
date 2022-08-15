#include "include/header.h"
#include <stdio.h>

int main(void){
    char t1 = 97;
    char t2[] = "This is a test @99, oh my! it do go down!";
    int t3 = -25;
    unsigned int t4 = -16;
    unsigned int t5 = -10;
    unsigned int t6 = -100;
    
    for(int i =0; i < 100;i++){
    my_printf("my_printf : char : %c,\n string : %s,\n deci : %d,\n octa : %o,\n un : %u,\n ex : %x,", t1, t2, t3, t4, t5, t6);
    }

    return 0;
}