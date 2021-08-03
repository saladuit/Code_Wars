/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_square.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:58:50 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:58:53 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <math.h>
#include <stdio.h>

bool is_square(int n) {
  int i;
  float p;
  int m;

  if (n < 0)
    return (false);
  if (n == 0)
    return (true);
  i = 0;
  p = sqrt(n);
  m = p;
  if (p == m)
    return (true);
  else
    return (false);
}
