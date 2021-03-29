#pragma once

#include <stddef.h>

typedef enum DataType {
  Integer,
  Decimal,
  Timestamp,
  String
} DataType;

typedef struct Page
{
  DataType *metadata;
  size_t metadata_size;
} Page;

void create_page(size_t metadata_size, DataType *metadata, int *error);
