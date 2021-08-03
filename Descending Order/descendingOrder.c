/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   descendingOrder.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:01:05 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:01:07 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

static uint64_t numlen(uint64_t n) {
 uint64_t len;
 
  len = 0;
  while (n) {
    n /= 10;
    len++;
  }
  return (len);
}

void swap(uint64_t *result, uint64_t i) {
  int tmp;
  
  tmp= result[i];
  result[i] = result[i + 1];
  result[i + 1] = tmp;
  return ;
}

void  sort(uint64_t *result, uint64_t len) {
  uint64_t i;
  
  i = 0;
  if (len == 1)
    return;
  while (i < len) {
//    printf("cmp: %lu & %lu\n", result[i], result[i + 1]);
    if (result[i] < result[i + 1])
      swap(result, i);
    i++;
  }
  sort(result, len - 1);
}
uint64_t pitoi(uint64_t *result, uint64_t len) {
  uint64_t asc;
  uint64_t i;
  uint64_t mult;
  
  mult = 1;
  i = 0;
  asc = 0;

  while(i < len) {
    asc += (result[len - 1] * mult);
//    printf("%lu\n", asc);
    len--;
    mult *= 10;
  }
  return (asc);  
}

uint64_t *itopi(uint64_t n, uint64_t len) {
  uint64_t *result;
  
  result = calloc(len + 1, sizeof(uint64_t));
  printf("\narray:\n");
  while (len) {
    result[len - 1] = n % 10;
    printf("%lu", result[len - 1]);
    n /= 10;
    len--;
  }
  return (result);
}

uint64_t descendingOrder(uint64_t n)
{
  uint64_t *result;
  uint64_t len;
  uint64_t asc;
  uint64_t i;
  
  if (n == 0)
    return (0);
  len = numlen(n);
  result = itopi(n, len);
  sort(result, len);
  i = 0;
  printf("\nsort:\n");
  while (i < len) {
    printf("%lu", result[i]);
    i++;
  }
  asc = pitoi(result, len);
  printf("\nresult: %lu\n", asc);
  return (asc);
}
