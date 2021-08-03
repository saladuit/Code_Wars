/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   count_sheep.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:15:03 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:15:05 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

size_t count_sheep(const bool *sheep, size_t count);

size_t  count_sheep(const bool *sheep, size_t count) {
  size_t baa;
  size_t i;
  
  i = 0;
  baa = 0;
  while (count) {
    if (sheep[i] == 1)
       baa++;
    i++;
    count--;
  }
  return (baa);
}
