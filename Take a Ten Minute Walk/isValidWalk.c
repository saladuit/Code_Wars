/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isValidWalk.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:47:17 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:47:20 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool isValidWalk(const char *walk) {
  size_t i;
  size_t x;
  size_t y;
  
  i = 0;
  x = 0;
  y = 0;
  printf("\nstring: %s\n", walk);
  while (walk[i]) {
    if (walk[i] == 'n')
        y++;
    else if (walk[i] == 's')
        y--;
    else if (walk[i] == 'w')
        x--;
    else if (walk[i] == 'e')
        x++;
    i++;
  }
  printf("\nx: %d\ny: %d", x, y);
  if (x == 0 && y == 0 && i == 10)
    return (true);
  return (false);
}
