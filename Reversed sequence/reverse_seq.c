/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_seq.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:05:34 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:05:40 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Note: allocate memory yourself */
/* return NULL in case num == 0 */

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
  size_t i;
  
  i = 0;
  unsigned short* array;
  if (!num)
    return (NULL);
  array = calloc(num, sizeof(int));
  while (num) {
    array[i] = num;
    num--;
    i++;
  }
  return (array);
}
