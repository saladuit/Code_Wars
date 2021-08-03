/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_average.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:06:32 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:06:34 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stddef.h>

int get_average(const int *marks, size_t count);

int get_average(const int *marks, size_t count) {
  int result;
  size_t i;
  
  result = 0;
  i = 0;
  while (i < count) {
    result += marks[i];
    i++;
  }
  return (result = result / count);
}
