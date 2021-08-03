/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   arr_plus_arr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:03:18 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:03:21 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

long arr_plus_arr(const int *a,  const int *b, size_t na, size_t nb)
{
  long result;
  
  result = 0;
  while (na > 0) {
    result += a[na - 1];
    na--;
  }
  while (nb > 0) {
    result += b[nb - 1];
    nb--;
  }
    return (result);
}
