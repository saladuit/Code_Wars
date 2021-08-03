/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_outlier.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:52:19 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:52:26 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int find_outlier(const int *values, size_t count);

int find_outlier(const int *values, size_t count) {
  size_t i;
  int odd;
  int even;
  
  i = 0;
  odd = 0;
  even = 0;
  while (i < count) {
    if (values[i] % 2 == 0)
      even++;
    else if (values[i] % 2 == 1 || values[i] % 2 == -1 )
      odd++;
    i++;
  }
  i = 0;
  while ( i < count) {
    if (odd == 1 && (values[i] % 2 == 1 || values[i] % 2 == -1 ))
      return (odd = values[i]);
    if (even == 1 && values[i] % 2 == 0)
      return (even = values[i]);
    i++;
  }
  return (0);
}
