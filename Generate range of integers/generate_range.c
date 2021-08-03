/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   generate_range.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:15:43 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:15:44 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//  1) dynamically allocate memory for the return array
//  2) assign the size of this array to the pointer *sz

#include <stdlib.h>
int count_size(int min, int max, int step) {
  int size;
  int diff;
  
  diff = max - min;
  size = diff / step;
  return (size + 1);
}
int *generate_range(int min, int max, int step, size_t *sz) {
  int *result;
  int temp;
  int size;
  size_t i;
  
  i = 0;
  size = count_size(min, max, step);
  *sz = size;
  result = (int *)calloc(size + 1, sizeof(int));
  while (size) {
    if (i == 0) {
      temp = min;
      result[i] = temp;
      i++;
    }
    else {
      temp += step;
      result[i] += temp;
      i++;
      size--;
    }
  }
  return (result);
}
