#include <stdio.h>

#include "error_code.h"
#include "hello.h"

int main (void)
{
  DataType x[] = {Integer, Integer};
  int a = 0;
  create_page(2, x, &a);
  if (a == 0) {
    puts ("Hello, World!");
  } else {
    puts ("We have a problem!");
  }
  return 0;
}