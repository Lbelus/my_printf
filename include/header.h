#ifndef __HEADERFILE_H_
#define __HEADERFILE_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define MAXARGS 5
#define OCTAL 8
#define DECIMAL 10
#define HEXADECIMAL 16

//prints
int my_printf(char *fmt,...);
//void conversion_specifier(char *fmt, char *p, va_list ap, int i, unsigned int u);
void conversion_specifier(char *fmt, va_list ap);

//puts
void my_putchar(char c);
void my_putstr(char *string);
void my_putint(int i, va_list ap, char *p, int base);
void my_putuint(unsigned int u, va_list ap, char *p, int base);

//int
char* their_itoa(int value, char* result, int base);
char* unsigned_itoa(unsigned long int value, char* result, int base); 
unsigned long int wrap_arround(unsigned int i);
//string
int my_strlen(char *s);


#endif