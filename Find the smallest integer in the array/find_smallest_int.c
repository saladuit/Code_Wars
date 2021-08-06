/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_smallest_int.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:20:40 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:20:48 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int find_smallest_int(int *vec, size_t len)
{
  size_t i = 0;
  int tmp;
  
  while (len && vec[i])
    {
    if (!tmp)
      tmp = vec[i];
    if (tmp > vec[i])
      tmp = vec[i];
    i++;
    len--;
  }
  return tmp;
}
