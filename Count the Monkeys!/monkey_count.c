/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   monkey_count.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:05:01 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:05:08 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t *monkey_count(size_t n, size_t *count);
// Please make sure you store the number of values
// in the array you are returning from the function
// in the memory pointed to by the pResultCount
// pointer.

size_t *monkey_count(size_t n, size_t *count) {
  size_t i;
  size_t *result;
  
  i = 0;
  *count = n;
  result = calloc(n + 1, sizeof(size_t));
  while (i < n) {
  result[i] = i + 1;
    i++;
  }
  return (result);
}
