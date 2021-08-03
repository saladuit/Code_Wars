/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   invert.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:09:35 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:09:36 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void invert(int *values, size_t size)
{
  size_t i;
  
  i = 0;
  while (i  < size) {
  values[i++] *= -1;
  }
  return ;
}
