/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   string_to_number.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:09:08 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:09:14 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include <stdio.h>

int string_to_number(const char *src) {
  short sign;
  int integer;
  size_t multp;
  size_t len;

  if (!src || !*src)
    return (0);
  sign = 1;
  multp = 1;
  integer = 0;
  if (*src == '-') {
    sign *= -1;
    src++;
  }
  len = strlen(src) - 1;
  while (len >= 0) {
    if (len == 0) {
      integer += (src[len] - '0') * multp;
      break ;
    }
    integer += (src[len] - '0') * multp;
    multp *= 10;
    len--;
  }
  return (integer * sign);
}
