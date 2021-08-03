/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   array_diff.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:50:48 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:50:50 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int *strint(const int *s, int c, size_t len) {
  int *p;
  size_t i;
  
  
  if (!s)
    return (NULL);
  i = 0;
  p = (int *)s;
  while (i < len) {
    if (p[i] == c)
      return (p + i);
    i++;
  }
  return (NULL);
}

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {
  int *result;
  size_t i;
  size_t k;
  int p;
  
  i = 0;
  k = 0;
  p = 1;
  result = malloc(p * sizeof(int));
  while (i < n1) {
    if (!strint(arr2, arr1[i], n2)) {
      result = realloc(result, ++p * sizeof(int));
      result[k] = arr1[i];
      k++;
    }
    i++;
  }
  *z = k;
  return (result);
}
