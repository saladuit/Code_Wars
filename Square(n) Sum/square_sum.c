/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   square_sum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:14:36 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:14:37 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int square_sum(const int *values, size_t count);

int   square_sum(const int *values, size_t count) {
  size_t i;
  int temp;
  int result;
  
  i = 0;
  temp = 0;
  result = 0;
  while (count) {
    temp = values[i];
    temp *= temp;
    result += temp;
    i++;
    count--;
  }
  return (result);
}
