/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   number_to_string.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:16:15 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:16:17 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t   calculate_size(int number) {
  size_t size;
  
  size = 0;
  while (number) {
    number /= 10;
    size++;
  }
  return (size);
}

const char* number_to_string(int number) {
  char *result;
  size_t size;
  int rem;
  
  if (number == 0) {
    result = (char *)calloc(2, sizeof(char));
    result[0] = '0';
    return (result);
  }
  size = calculate_size(number);
  if (number > 0) {
    result = (char *)calloc(size + 1, sizeof(char)); 
    while (number) {
      result[size - 1] = number % 10 + '0';
      number /= 10;
      size--;
     }
     return (result);
  }
  if (number < 0) {
    result = (char *)calloc(size + 2, sizeof(char));
    number *= -1;
    while (number && size) {
      rem = number % 10;
      result[size] = rem + '0';
      number /= 10;
      size--;
    }
    result[0] = '-';
    return (result);
  }
  return (NULL);
}
