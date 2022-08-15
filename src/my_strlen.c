#include "../include/header.h"

int my_strlen(char *string) {
  int len = 0;
  while (string[len] != '\0') {
    len += 1;
  }
  return len;
}