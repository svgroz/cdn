#include "gtest/gtest.h"

extern "C" {
    #include "hello.h"
}

TEST(create_page, not_ok) {
  int error_code = 0;
  DataType x[] = {};
  create_page(0, x, &error_code);
  ASSERT_NE(error_code, 0);
}

