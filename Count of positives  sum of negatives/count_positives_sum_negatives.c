/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   count_positives_sum_negatives.c                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:11:58 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:11:59 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum) {
  size_t i;
  
  i = 0;
  if (!values)
    return ((void)NULL);
  while (i < count) {
    if (values[i] > 0)
        *positivesCount += 1;
    if (values[i] < 0)
      *negativesSum += values[i];
    i++;
  }
  return ;
}
