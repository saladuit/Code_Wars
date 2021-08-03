#include <stddef.h>
#include <string.h>
#include <stdlib.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size);

int  *maps(const int *arr, size_t size) {
  int *result;
  size_t i;
  
  result = calloc(size, sizeof(int));
  i = 0;
  while(i < size) {
    result[i] = arr[i];
    result[i] += arr[i];
    i++;
  }
  return (result);
}
