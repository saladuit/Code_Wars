/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_average.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:06:03 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:06:13 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

double find_average(double* array, int length) {
 size_t i;
 double result;
  
  result = 0;
  i = 0;
  if (!array) {
    return (0);
  }
  while (i < length) {
    result += array[i];
    i++;
  }
  return (result /= length);
}
