#include <stddef.h>
#include "hello.h"
#include "error_code.h"

void create_page(size_t metadata_size, DataType *metadata, int *error) {
  if (metadata == NULL) 
  {
    *error = METADATA_SIZE_IS_NULL;
    return;
  } 
  
  if (metadata_size <= 0)
  {
    *error = METADATA_SIZE_IS_ILLEGAL;
    return;
  }
  
  *error = 0;
}
