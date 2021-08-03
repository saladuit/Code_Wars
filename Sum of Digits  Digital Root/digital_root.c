/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   digital_root.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:55:31 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:55:34 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int digital_root(int n) {
  int result;
  
  result = 0;
  printf("\n\nnumber: %d", n);
  printf("\nresult:\n");
  if (n < 10)
    return (n);
  while (n) {
    result += n % 10;
    n /= 10;
    printf("%d, ", result);
  }
  return (digital_root(result));
}
