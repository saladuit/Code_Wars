/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   positive_sum.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 12:54:06 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 12:54:43 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int   positive_sum(const int *values, size_t count)
{
  int sum;
  
  sum = 0;
  count -= 1;
  while (count != -1)
  {
    if (values[count] > 0)
      sum = sum + values[count];
    count--;
  }
  if (sum == 0)
    return (0);
  else
    return (sum);
}
