/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   accum.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:02:11 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:02:14 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char *accum(const char *source);

size_t   calc_size(size_t multiply) {
  size_t result;
  
  result = multiply - 1;
  while (multiply) {
    result += multiply;
    multiply--;
  }
  return (result + 1);
}

char *accum(const char *source) {
  size_t i;
  size_t j;
  size_t k;
  size_t repeat;
  size_t len;
  size_t size;
  char *result;

  i = 0;
  j = 0;
  k = 0;
  len = strlen(source);
  printf("len: %zu", len); 
  size = calc_size(len);
  printf("size: %zu", size);
  result = calloc(size, sizeof(char));
  while (j < size) {
    result[j] = toupper(source[i]);
    j++;
    repeat = 0;
    while (repeat < i) {
      result[j] = tolower(source[i]);
      j++;
      repeat++;
    }
    if (!(size - 1 == 1 || size - 1 == j))
      result[j] = '-';
    j++;
    i++;
  }
  return (result);
}
